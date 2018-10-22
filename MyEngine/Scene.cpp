//
// Created by nils.steinbuegl on 10/21/2018.
//

#include "Headers/Scene.h"


GameObject* Scene::CreateGameObject(std::string objName){
    GameObject* newObj = std::make_unique<GameObject>().get();
    newObj->mName = objName;
    return newObj;
}

GameObject* Scene::FindGameObject(std::string objName){
    for(auto &obj : mGameObjecets){
        if(obj.mName == objName)
        {
            return &obj;
        }
    }
    return nullptr;
}

void Scene::RemoveGameObject(std::string objName)
{
    for(auto &obj : mGameObjecets){
        if(obj.mName == objName)
        {
            // delete component here
        }
    }
}