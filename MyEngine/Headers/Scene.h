//
// Created by nils.steinbuegl on 10/21/2018.
//

#ifndef MYENGINE_SCENE_H
#define MYENGINE_SCENE_H

#include "GameObject.h"
#include <iostream>
#include <vector>
#include <utility>
#include <type_traits>
#include <typeindex>
#include <vector>

class Scene {
public:

    GameObject* CreateGameObject(std::string objName);

    GameObject* FindGameObject(std::string objName);

    void RemoveGameObject(std::string objName);

private:
    std::vector<GameObject> mGameObjecets;
};


#endif //MYENGINE_SCENE_H
