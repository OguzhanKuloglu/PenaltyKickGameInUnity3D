using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelManager : Singleton<LevelManager>
{
    private GameManager m_GameManager;

    private int m_playerLevelPoint;

    private void Awake()
    {
        //Cache
        m_GameManager = GameManager.Instance;

        m_GameManager.onGamePhaseChanged += Instance_OnGamePhaseChanged;
    }


    private void Instance_OnGamePhaseChanged(GamePhase _GamePhase)
    {
        
        switch (_GamePhase)
        {
            case GamePhase.GAME:
                StartCoroutine(countDownStart());
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


    
}
