using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

public abstract class Target : MonoBehaviour
{

    public Transform m_transform;
    public TargetTypes m_targetType;

    [SerializeField]
    private float m_AnimScaleDownTime = 0.2f;

    public int m_point;


    public abstract void OnBallTouch();

    protected virtual void Awake()
    {
        m_transform = GetComponent<Transform>();
    }

    public virtual void AnimTarget()
    {
         m_transform.DOScale(Vector3.zero, m_AnimScaleDownTime).SetEase(Ease.Flash);
    }

    
}
