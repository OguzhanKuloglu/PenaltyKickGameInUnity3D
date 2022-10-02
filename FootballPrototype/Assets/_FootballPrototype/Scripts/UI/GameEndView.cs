using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;


public class GameEndView : View<GameEndView>
{
    public Image m_imageGameFail;
    public Image m_imageGameSuccess;
    public Text m_TextHighScore;
    public Text m_TextLevelScore;

    protected override void Awake()
    {
        base.Awake();
    }

    protected override void OnGamePhaseChanged(GamePhase _GamePhase)
    {
        base.OnGamePhaseChanged(_GamePhase);

        switch (_GamePhase)
        {
            case GamePhase.GAME_END:
                SetupGameEndView();
                Transition(true);
                break;

            case GamePhase.GAME:

                if (m_Visible)
                    Transition(false);
                break;

        }
    }

    private void SetupGameEndView()
    {
        m_TextHighScore.transform.localScale = Vector3.zero;
        m_TextLevelScore.transform.localScale = Vector3.zero;
        m_imageGameFail.transform.localScale = Vector3.zero;
        m_imageGameSuccess.transform.localScale = Vector3.zero;
        CheckLevelEnd();

    }


    private void CheckLevelEnd()
    {
        int levelPoint = GamePlayView.Instance.LevelPoint;

        if (levelPoint > 0)
        {
            LevelSuccess(levelPoint);
        }
        else
        {   
            LevelFail(levelPoint);
        }

    }

    private void LevelFail(int _levelPoint)
    {
        m_imageGameFail.transform.DOScale(Vector3.one, 1f).SetEase(Ease.OutBounce);
        ShowLevelScore(_levelPoint);
    }

    private void LevelSuccess(int _levelPoint)
    {
        m_imageGameSuccess.transform.DOScale(Vector3.one, 1f).SetEase(Ease.OutBounce);
        ShowLevelScore(_levelPoint);

        int highScore = StatsManager.Instance.GetPlayerHighScore();
        if (highScore < _levelPoint)
        {
            StatsManager.Instance.SetPlayerHighScore(_levelPoint);
            AnimateHighScoreAnimation(_levelPoint);   
        }
        
    }

    private void AnimateHighScoreAnimation(int _levelPoint)
    {
        m_TextHighScore.text = Constants.c_LevelHighScore + _levelPoint.ToString();
        m_TextHighScore.transform.DOScale(1, 1).SetEase(Ease.InOutBounce);
    }

    private void ShowLevelScore(int _levelPoint)
    {
        m_TextLevelScore.transform.DOScale(Vector3.one, 1f).SetEase(Ease.OutBounce);
        m_TextLevelScore.text = Constants.c_LevelScore + _levelPoint.ToString();
    }

    public void NextGame()
    {
        m_GameManager.ChangePhase(GamePhase.GAME);
    }
}
