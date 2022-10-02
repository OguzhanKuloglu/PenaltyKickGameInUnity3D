using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StatsManager : Singleton<StatsManager>
{


    public void SetPlayerHighScore(int _Score)
    {
        int score = GetPlayerHighScore();
        if (score < _Score)
        {
            PlayerPrefs.SetInt(Constants.c_KeyLevelHighScore, _Score);
        }
    }


    public int GetPlayerHighScore()
    {
        if (PlayerPrefs.HasKey(Constants.c_KeyLevelHighScore))
            return PlayerPrefs.GetInt(Constants.c_KeyLevelHighScore);
        else
            return 0;

    }

    

}
