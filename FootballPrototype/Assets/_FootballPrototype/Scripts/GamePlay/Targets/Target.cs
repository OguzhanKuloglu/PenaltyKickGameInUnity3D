using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Target : MonoBehaviour
{

    public Transform m_transform;
    public ParticleSystem m_particleSystem;
    public TargetTypes m_targetType;

    public int m_point;


    public abstract void OnBallTouch();

    protected virtual void Awake()
    {
        m_transform = GetComponent<Transform>();
    }


}
