using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
public class TargetBallon : Target
{


    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag(TriggerTypes.Player.ToString()))
        {
            OnBallTouch();
        }
    }


    public override void OnBallTouch()
    {
        EventManager.DetectGoal(m_point, m_targetType);
        AnimateTarget();
    }

    private void AnimateTarget()
    {
        m_transform.DOScale(Vector3.zero, 0.5f).SetEase(Ease.Linear);
    }

    
}
