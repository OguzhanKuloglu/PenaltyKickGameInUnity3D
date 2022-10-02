using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class EventManager 
{

    #region UIEvents
    public delegate void OnSetLevelStatus(GamePhase _LevelPhase);
    public event OnSetLevelStatus onLevelPhaseChange;


    public delegate void OnTargetShoot(int _Point,TargetTypes _Type);
    public static event OnTargetShoot OnTargetShootDetect;

    public static void DetectGoal(int _Point,TargetTypes _Type)
    {
        OnTargetShootDetect?.Invoke(_Point, _Type);
    }


    public delegate void OnShoot();
    public static event OnShoot OnPlayerShoot;

    public static void PlayerShoot()
    {
        OnPlayerShoot?.Invoke();
    }



    #endregion

}
