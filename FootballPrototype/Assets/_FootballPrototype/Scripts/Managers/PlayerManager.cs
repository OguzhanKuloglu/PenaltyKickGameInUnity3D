using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.UIElements;

public class PlayerManager : Singleton<PlayerManager>
{

    GameManager m_gameManager;
    CameraManager m_cameraManager;

    public GameObject m_Ball;

    [SerializeField]
    private Vector3 m_ballStartPosition;
    private Vector3 m_instancePosition;





    
    public LineRenderer m_aimLineRenderer;
    private Camera m_mainCamera;
    private BoxCollider m_detectCollider;
    private Rigidbody m_ballRigidbody;
    private Transform m_ballTransform;

    private bool m_ballAimStatu = false;

    [SerializeField]
    private Vector3 m_ballFirstPosition;
    private Vector3 m_mouseFirstPosition;
    private Vector3 m_mouseLastPosition;
    [SerializeField]
    private float m_forceMultiplier = 30f;

    private void Awake()
    {
        //Cache
        m_gameManager = GameManager.Instance;
        m_cameraManager = CameraManager.Instance;
        m_detectCollider = GetComponent<BoxCollider>();
        m_gameManager.onGamePhaseChanged += Instance_OnGamePhaseChanged;
    }


    private void Instance_OnGamePhaseChanged(GamePhase _GamePhase)
    {

        switch (_GamePhase)
        {
            case GamePhase.GAME:

                break;


        }
    }


    public void SetupBall()
    {
        var ball = Instantiate(m_Ball,this.gameObject.transform);
        ball.transform.localPosition = m_ballStartPosition;
        m_ballRigidbody  = ball.GetComponent<Rigidbody>();
        m_ballTransform = ball.GetComponent<Transform>();
        m_mainCamera = CameraManager.Instance.m_MainCamera;
        m_ballTransform.transform.position = m_ballFirstPosition;
        m_detectCollider.isTrigger = false;

    }



    private void OnMouseDown()
    {
        m_ballAimStatu = true;
        m_aimLineRenderer.SetPosition(0, m_ballTransform.position);
    }
    private void OnMouseDrag()
    {
        Ray ray = m_mainCamera.ScreenPointToRay(Input.mousePosition);
        if (Physics.Raycast(ray, out RaycastHit raycastHit) && m_ballAimStatu)
        {
            m_aimLineRenderer.SetPosition(1, raycastHit.point);

        }
    }
    private void OnMouseUp()
    {
        Ray ray = m_mainCamera.ScreenPointToRay(Input.mousePosition);
        if (Physics.Raycast(ray, out RaycastHit raycastHit))
        {
            m_mouseLastPosition = raycastHit.point;
            Shoot(raycastHit.point);
        }
    }



    private void Shoot(Vector3 aim)
    {
        m_ballAimStatu = false;
        m_ballRigidbody.AddForce(new Vector3(aim.x, aim.y, aim.z) * m_forceMultiplier);
        m_cameraManager.SetCameraShake();

        StopBall();
        ResetBallLine();
    }


    public async void StopBall()
    {
        await Task.Delay(2500);

        m_ballRigidbody.velocity = Vector3.zero;
        m_ballRigidbody.angularVelocity = Vector3.zero;
        m_ballTransform.position = m_ballFirstPosition;
        m_ballTransform.rotation = Quaternion.identity;
        m_ballAimStatu = true;
    }

    private void ResetBallLine()
    {
        
        m_aimLineRenderer.positionCount = 0;
        m_aimLineRenderer.positionCount = 2;
    }

}
