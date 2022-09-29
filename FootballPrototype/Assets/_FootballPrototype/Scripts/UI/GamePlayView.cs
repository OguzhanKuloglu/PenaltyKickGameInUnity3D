using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
using DG;

public class GamePlayView : View<GamePlayView>
{


    public Text m_txtCountDown;
    public Text m_txtPlayerLevelPoint;
    public Text m_txtGoal;

    protected override void Awake()
    {
        base.Awake();

    }
    private void OnEnable()
    {
        EventManager.OnTargetShootDetect += SetPlayerLevelPoint;
    }
    private void OnDisable()
    {
        EventManager.OnTargetShootDetect -= SetPlayerLevelPoint;
    }


    protected override void OnGamePhaseChanged(GamePhase _GamePhase)
    {
        base.OnGamePhaseChanged(_GamePhase);

        switch (_GamePhase)
        {
            case GamePhase.GAME:

                Transition(true);
                break;

        }
    }

    public void SetCountDownTime(int _Seconds)
    {
        m_txtCountDown.transform.localScale = Vector2.zero;
        m_txtCountDown.text = _Seconds.ToString();
        m_txtCountDown.transform.DOScale(Vector3.one, 0.75f).SetEase(Ease.InOutQuart).
            OnComplete(() => m_txtCountDown.transform.DOScale(Vector3.zero, 0.1f));
    }

    public void SetPlayerLevelPoint(int _Point,TargetTypes _Type)
    {
        m_txtPlayerLevelPoint.transform.localScale = Vector2.zero;
        m_txtPlayerLevelPoint.text = _Point.ToString();
        m_txtPlayerLevelPoint.transform.DOScale(Vector3.one, 0.75f).SetEase(Ease.InOutQuart).
            OnComplete(() => m_txtCountDown.transform.DOScale(Vector3.zero, 0.1f));

        if (_Type == TargetTypes.Goal)
        {
            SetGoalAnim();
        }
    }

    public void SetGoalAnim()
    {
        m_txtGoal.transform.localScale = Vector3.zero;
        m_txtGoal.transform.DOScale(Vector3.one, 1.5f).SetEase(Ease.InOutBounce).
            OnComplete(() => m_txtGoal.transform.DOScale(Vector3.zero, 0.3f));
    }
}
