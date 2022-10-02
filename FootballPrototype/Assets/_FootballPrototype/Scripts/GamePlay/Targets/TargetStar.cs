using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UIElements;

public class TargetStar : Target
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
        base.AnimTarget();
    }

 
}
