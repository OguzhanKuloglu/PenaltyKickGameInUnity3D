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

    
    private void Start()
    {
        Application.targetFrameRate = 60;
        ChangePhase(GamePhase.MAIN_MENU);

    }

    public void ChangePhase(GamePhase _GamePhase)
    {
        
        currentPhase = _GamePhase;
        if (onGamePhaseChanged != null)
            onGamePhaseChanged.Invoke(_GamePhase);
    }



   
}
