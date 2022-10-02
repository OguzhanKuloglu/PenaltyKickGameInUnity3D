using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MainMenuView : View<MainMenuView>
{

    public Transform m_PanelSettings;
    public InputField m_txtBallPower;
    public InputField m_txtPointPerGoal;
    public Text m_txtStatu;
    public Text m_txtData;

    private bool m_PanelStatu = false;
    private GameData m_GameData = new GameData();

    protected override void Awake()
    {
        base.Awake();
    }

    public void OnPlayButton()
    {
        if (m_GameManager.currentPhase == GamePhase.MAIN_MENU)
            m_GameManager.ChangePhase(GamePhase.GAME);
    }

    protected override void OnGamePhaseChanged(GamePhase _GamePhase)
    {
        base.OnGamePhaseChanged(_GamePhase);

        switch (_GamePhase)
        {
            case GamePhase.MAIN_MENU:
                
                Transition(true);
                break;

            case GamePhase.GAME:
                if (m_Visible)
                    Transition(false);
                break;

        }
    }

    public void SetActiveSettingsPanel()
    {
        m_PanelSettings.gameObject.SetActive(!m_PanelStatu);
        m_PanelStatu = !m_PanelStatu;
        m_txtData.text = m_PanelStatu ? Constants.c_CloseData : Constants.c_OpenData;
    }

    public void LoadDataFromJson()
    {   
        m_GameData = SaveLoadManager.Load();
        m_txtBallPower.text = m_GameData.BallShootPower.ToString();
        m_txtPointPerGoal.text = m_GameData.ScorePointPerGoal.ToString();
        m_txtStatu.text = Constants.c_JsonStatuLoadSuccess;
    }

    public void SaveDataToJson()
    {
        m_GameData.BallShootPower =  Int32.Parse(m_txtBallPower.text);
        m_GameData.ScorePointPerGoal = Int32.Parse(m_txtPointPerGoal.text);
        SaveLoadManager.Save(m_GameData);
        m_txtBallPower.text = String.Empty;
        m_txtPointPerGoal.text = String.Empty;
        m_txtStatu.text = Constants.c_JsonStatuSaveSuccess;
    }

    public void SetGameData()
    {
        PlayerManager.Instance.ForceMultiplier = m_GameData.BallShootPower;
        LevelManager.Instance.SetNewPointForGoalArea(m_GameData.ScorePointPerGoal);
        m_txtStatu.text = Constants.c_DataSetSuccess;
    }

}
