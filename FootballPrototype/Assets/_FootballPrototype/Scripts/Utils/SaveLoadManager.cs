using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
public static class SaveLoadManager 
{
    


    public static void Save(GameData _GameData)
    {
        string fullPath = Application.persistentDataPath + Constants.c_directory + Constants.c_fileName;
        string gameData = JsonUtility.ToJson(_GameData);

        if (!File.Exists(fullPath))
        {
            Directory.CreateDirectory(Application.persistentDataPath + Constants.c_directory);   
        }
            

        File.WriteAllText(fullPath, gameData);

    }


    public static GameData Load()
    {
        GameData templateData = new GameData();

        string fullPath = Application.persistentDataPath + Constants.c_directory + Constants.c_fileName;
        

        if (File.Exists(fullPath))
        {
            string json = File.ReadAllText(fullPath);
            templateData  = JsonUtility.FromJson<GameData>(json);

            return templateData;
            
        }
        return templateData;
    }
}
