using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class CameraManager : Singleton<CameraManager>
{
    public Camera m_MainCamera;




    public void SetCameraToPosition(Vector3 _Position)
    {
        m_MainCamera.transform.position = _Position;
    }

    public void SetCameraShake()
    {
        m_MainCamera.DOShakePosition(0.1f,1,5);
    }

}
