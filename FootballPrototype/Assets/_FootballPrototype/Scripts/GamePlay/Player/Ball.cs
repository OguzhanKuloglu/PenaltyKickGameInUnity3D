using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;

public class Ball : MonoBehaviour
{

    public LineRenderer m_ballLine;
    public int m_lineCounter = 0;

    private Vector3 m_mouseFirstPosition;
    private Vector3 m_mouseLastPosition;

    private Rigidbody m_rigidbody;
    private Transform m_transform;

    private Vector3 m_ballStartPos;
     
    [SerializeField]
    private float m_forceMultiplier = 5;

    [SerializeField]
    private Camera m_mainCamera;

    private bool m_ballStatu = false;



    void Start()
    {
        m_rigidbody = GetComponent<Rigidbody>();
        m_transform = GetComponent<Transform>();
        m_ballStartPos = m_transform.position;
    }

    public void SetBallSetup(Camera _MainCamera)
    {
        m_mainCamera = _MainCamera;
        m_ballStatu = true;
    }

    

    private void OnMouseDown()
    {
        m_ballStatu = true;
        m_ballLine.SetPosition(0, m_ballStartPos);
    }


    private void OnMouseDrag()
    {
        Ray ray = m_mainCamera.ScreenPointToRay(Input.mousePosition);
        if (Physics.Raycast(ray, out RaycastHit raycastHit) && m_ballStatu)
        {
            m_ballLine.SetPosition(1, raycastHit.point);

        }
    }

    private void OnMouseUp()
    {
        Ray ray = m_mainCamera.ScreenPointToRay(Input.mousePosition);
        if (Physics.Raycast(ray, out RaycastHit raycastHit))
        {
            Debug.Log("raycasthit pos : " + raycastHit.point);
            m_mouseLastPosition = raycastHit.point;
            Shoot(raycastHit.point);
        }
    }



    private void Shoot(Vector3 aim)
    {
        m_ballStatu = false;
        m_rigidbody.AddForce(new Vector3(aim.x, aim.y, aim.z) * m_forceMultiplier);

        
        StopBall();
        ResetBallLine();
    }


    public async void StopBall()
    {
        await Task.Delay(2500);
        
        m_rigidbody.velocity = Vector3.zero;
        m_rigidbody.angularVelocity = Vector3.zero;
        m_transform.position = m_ballStartPos;
        m_transform.rotation = Quaternion.identity;
        m_ballStatu = true;
    }

    private void ResetBallLine()
    {
        m_lineCounter = 0;
        m_ballLine.positionCount = 0;
        m_ballLine.positionCount = 2;
    }
}


