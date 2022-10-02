using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEngine.GraphicsBuffer;

public class LevelManager : Singleton<LevelManager>
{
    private GameManager m_GameManager;

    public GameObject[] m_Targets;
    public GameObject m_GoalArea;
    public Transform m_TargetsParent;


    private GameObject[] m_Pool = new GameObject[10];
    private int m_MaxPoolCount = 10;
    private int m_PoolCounter = 0;
    
    [SerializeField]
    private Vector2[] m_TargetPlaceRange;

    
    public void SetNewPointForGoalArea(int _NewPoint)
    {
        m_GoalArea.transform.GetChild(3).GetComponent<TargetGoalArea>().m_point = _NewPoint;
    }


    private void Awake()
    {
        //Cache
        m_GameManager = GameManager.Instance;

        m_GameManager.onGamePhaseChanged += Instance_OnGamePhaseChanged;
    }

    private void OnEnable()
    {
        
        EventManager.OnPlayerShoot += ClearTargets;
    }
    private void OnDisable()
    {
        
        EventManager.OnPlayerShoot -= ClearTargets;
    }


    private void Instance_OnGamePhaseChanged(GamePhase _GamePhase)
    {
        
        switch (_GamePhase)
        {
            case GamePhase.GAME:
                StartCoroutine(countDownStart());
                CreateRandomTargets();
                break;
            
                
        }
    }


    IEnumerator countDownStart()
    {        
        for (int i = 3; i > 0; i--)
        {
            GamePlayView.Instance.SetCountDownTime(i);
            yield return new WaitForSeconds(1f);
        }

        PlayerManager.Instance.SetupBall();
    }


    private void CreateRandomTargets()
    {
        int randomTarget = Random.Range(3, 8);
        for (int i = 0; i < randomTarget; i++)
        {
            if (m_PoolCounter >= m_MaxPoolCount)
            {
                InstantiateFromPool(randomTarget - i);
                return;
            }
                

            var target = Instantiate(m_Targets[Random.Range(0, m_Targets.Length)], m_TargetsParent.transform);
            target.transform.position = Vector3.zero;
            target.transform.position = new Vector3(Random.Range(m_TargetPlaceRange[0].x, m_TargetPlaceRange[1].x), Random.Range(m_TargetPlaceRange[0].y, m_TargetPlaceRange[1].y),58);
            m_Pool[m_PoolCounter] = target;
            m_PoolCounter++;
        }
    }


    private void InstantiateFromPool(int _TargetCount)
    {
        for (int i = 0; i < _TargetCount; i++)
        {
            m_Pool[i].transform.localScale = Vector3.one *3;
            m_Pool[i].transform.position = Vector3.zero;
            m_Pool[i].transform.position = new Vector3(Random.Range(m_TargetPlaceRange[0].x, m_TargetPlaceRange[1].x), Random.Range(m_TargetPlaceRange[0].y, m_TargetPlaceRange[1].y), 58);
            m_Pool[i].gameObject.SetActive(true);
        }
    }

    private void ClearTargets()
    {
        for (int i = 0; i < m_PoolCounter; i++)
        {
            m_Pool[i].gameObject.SetActive(false);
        }
    }


}
