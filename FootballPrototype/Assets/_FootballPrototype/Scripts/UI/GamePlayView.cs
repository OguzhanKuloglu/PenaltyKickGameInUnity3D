using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
using DG;
using System.Threading.Tasks;
using System;

public class GamePlayView : View<GamePlayView>
{
    public Text m_txtCountDown;
    public Text m_txtPlayerLevelPoint;
    public Text m_txtGoal;

    private int m_pointOfLevel = 0;
    private int m_PointPerGoalFromJson = 0;

    protected override void Awake()
    {
        base.Awake();

    }

    protected override void OnGamePhaseChanged(GamePhase _GamePhase)
    {
        base.OnGamePhaseChanged(_GamePhase);

        switch (_GamePhase)
        {
            case GamePhase.GAME:
                SetupGameView();
                Transition(true);
                break;

        }
    }

    private void OnEnable()
    {
        EventManager.OnTargetShootDetect += SetPlayerLevelPoint;
        EventManager.OnPlayerShoot += AfterPlayerShoot;
    }

    private void OnDisable()
    {
        EventManager.OnTargetShootDetect -= SetPlayerLevelPoint;
        EventManager.OnPlayerShoot -= AfterPlayerShoot;
    }

    private void SetupGameView()
    {
        m_pointOfLevel = 0;
        m_txtPlayerLevelPoint.text = m_pointOfLevel.ToString();
        
    }

    public void SetCountDownTime(int _Seconds)
    {
        m_txtCountDown.transform.localScale = Vector2.zero;
        m_txtCountDown.text = _Seconds.ToString();
        m_txtCountDown.transform.DOScale(Vector3.one, 0.75f).SetEase(Ease.InOutQuart).
            OnComplete(() => m_txtCountDown.transform.DOScale(Vector3.zero, 0.1f).SetEase(Ease.Flash));
        
    }

    public void SetPlayerLevelPoint(int _Point,TargetTypes _Type)
    {

        m_pointOfLevel += _Point;
        m_txtPlayerLevelPoint.transform.localScale = Vector2.zero;
        m_txtPlayerLevelPoint.text = m_pointOfLevel.ToString();
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

    public int LevelPoint
    {
        get { return m_pointOfLevel; }
    }

    public int PointPerGoal
    {
        get { return m_PointPerGoalFromJson; }
        set { m_PointPerGoalFromJson = value; }
    }

    private void AfterPlayerShoot()
    {
        m_GameManager.ChangePhase(GamePhase.GAME_END);
        Transition(false);
    }

}
