using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using Cinemachine;


public class CameraManager : Singleton<CameraManager>
 {
    public Camera m_MainCamera;
    public CinemachineVirtualCamera m_FollowCamera;
    public Animator m_CameraStateAnimator;


    

    public void SetCameraFollowObject(Transform _Target)
    {
        m_FollowCamera.LookAt = _Target;
    }


    public void SetCameraToPosition(Vector3 _Position)
    {
        m_MainCamera.transform.position = _Position;
    }

    public void SetCameraAction(bool _ToPoint)
    {
        if (_ToPoint)
        {
            m_CameraStateAnimator.Play(Constants.c_AnimPointCamera);

        }
        else
        {
            m_CameraStateAnimator.Play(Constants.c_AnimFollowCamera);
        }
    }

 
}
