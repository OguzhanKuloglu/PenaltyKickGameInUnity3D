using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.UIElements;

public class PlayerManager : Singleton<PlayerManager>
{
    public GameObject m_prefabBall;
    public LineRenderer m_aimLineRenderer;

    [SerializeField]
    private Vector3 m_ballStartPosition;

    [SerializeField]
    private Vector3 m_ballFirstPosition;

    [SerializeField]
    private float m_forceMultiplier = 60f;

    private GameManager m_gameManager;
    private CameraManager m_cameraManager;

    private Camera m_mainCamera;
    private BoxCollider m_detectCollider;
    private Rigidbody m_ballRigidbody;
    private Transform m_ballTransform;
    
    private Vector3 m_mouseFirstPosition;
    private Vector3 m_mouseLastPosition;
    private Vector3 m_instancePosition;

    private int m_forceMultiplierFromJson = 1;

    private bool m_ballAimStatu = false;
    

    private void Awake()
    {
        //Cache
        m_gameManager = GameManager.Instance;
        m_cameraManager = CameraManager.Instance;
        m_detectCollider = GetComponent<BoxCollider>();
    }

    public void SetupBall()
    {
        m_cameraManager.SetCameraAction(false);
        if (m_ballTransform == null)
        {
            
            var ball = Instantiate(m_prefabBall, this.gameObject.transform);
            ball.transform.localPosition = m_ballStartPosition;
            m_ballRigidbody = ball.GetComponent<Rigidbody>();
            m_ballTransform = ball.GetComponent<Transform>();
            m_mainCamera = CameraManager.Instance.m_MainCamera;
            m_ballTransform.transform.position = m_ballFirstPosition;
            m_cameraManager.SetCameraFollowObject(m_ballTransform);
            m_detectCollider.isTrigger = true;
            m_ballAimStatu = true;
            
        }
        else
        {
            m_detectCollider.isTrigger = true;
            m_ballAimStatu = true;
        }
    }

    #region GamePlayMechanic

    private void OnMouseDown()
    {
        if (!m_ballAimStatu)
            return;
        m_aimLineRenderer.SetPosition(0, Vector3.zero );
    }

    private void OnMouseDrag()
    {
        if (!m_ballAimStatu)
            return;

        Ray ray = m_mainCamera.ScreenPointToRay(Input.mousePosition);
        if (Physics.Raycast(ray, out RaycastHit raycastHit) && m_ballAimStatu)
        {
            m_aimLineRenderer.SetPosition(1, raycastHit.point);
        }
    }

    private void OnMouseUp()
    {
        if (!m_ballAimStatu)
            return;

        Ray ray = m_mainCamera.ScreenPointToRay(Input.mousePosition);
        if (Physics.Raycast(ray, out RaycastHit raycastHit))
        {
            m_mouseLastPosition = raycastHit.point;
            Shoot(raycastHit.point);
        }
    }

    private void Shoot(Vector3 aim)
    {
        //If power lower Cant shoot Try Again
        if (aim.z < 10) {
            ResetBallLine();
            return;
        }

        m_detectCollider.isTrigger = false;
        m_ballAimStatu = false;
        m_ballRigidbody.AddForce(new Vector3(aim.x, aim.y, aim.z) * m_forceMultiplier * m_forceMultiplierFromJson,ForceMode.Force);

        StartCoroutine(corStopLevel());
        ResetBallLine();
    }

    private IEnumerator corStopLevel()
    {
        yield return new WaitForSeconds(0.5f);
        m_cameraManager.SetCameraAction(true);
        yield return new WaitForSeconds(3f);
        m_cameraManager.SetCameraAction(false);
        yield return new WaitForSeconds(0.5f);
        m_ballRigidbody.velocity = Vector3.zero;
        m_ballRigidbody.angularVelocity = Vector3.zero;
        m_ballTransform.position = m_ballFirstPosition;
        m_ballTransform.rotation = Quaternion.identity;
        m_ballAimStatu = false;
        EventManager.PlayerShoot();
        
    }

    private void ResetBallLine()
    {
        m_aimLineRenderer.positionCount = 0;
        m_aimLineRenderer.positionCount = 2;
    }

    #endregion

    public int ForceMultiplier
    {
        get { return m_forceMultiplierFromJson; }
        set { m_forceMultiplierFromJson = value; }
    }

}
