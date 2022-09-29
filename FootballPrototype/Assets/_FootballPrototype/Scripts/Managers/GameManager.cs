using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : Singleton<GameManager>
{

    #region Delegate & Events

    public delegate void OnGamePhaseChanged(GamePhase _GamePhase);
    public event OnGamePhaseChanged onGamePhaseChanged;

    #endregion


    public GamePhase currentPhase { get; private set; }

    private void Awake()
    {
        
    }


    private void Start()
    {
        Application.targetFrameRate = 60;
        ChangePhase(GamePhase.MAIN_MENU);

    }

    public void ChangePhase(GamePhase _GamePhase)
    {
        switch (_GamePhase)
        {
            case GamePhase.MAIN_MENU:
                
                break;

            case GamePhase.GAME:

                break;

        }

        currentPhase = _GamePhase;

        if (onGamePhaseChanged != null)
            onGamePhaseChanged.Invoke(_GamePhase);
    }


}
