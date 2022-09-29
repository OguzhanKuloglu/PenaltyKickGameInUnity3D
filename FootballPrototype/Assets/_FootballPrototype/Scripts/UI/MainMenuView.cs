using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MainMenuView : View<MainMenuView>
{

 
    protected override void Awake()
    {
        base.Awake();

        //m_StatsManager = StatsManager.Instance;
        //m_IdSkin = m_StatsManager.FavoriteSkin;
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

}
