using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

public class TargetGoalArea : Target
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
    }
}
