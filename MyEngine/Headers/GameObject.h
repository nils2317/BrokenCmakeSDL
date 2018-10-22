//
// Created by nils.steinbuegl on 10/21/2018.
//

#ifndef MYENGINE_GAMEOBJECT_H
#define MYENGINE_GAMEOBJECT_H


#include "Component.h"
#include <iostream>
#include <vector>
#include <utility>
#include <type_traits>
#include <typeindex>
#include <unordered_map>


class GameObject{
public:
    void Update();
    std::string mName;

    template <typename T>
    Component* AddComponent();

    template <typename T>
    Component* GetComponent();

    template <typename T>
    void FindComponent();

    template <typename T>
    void RemoveComponent();

private:
    std::unordered_map<std::type_index, std::unique_ptr<Component>> mComponents;
};


#endif //MYENGINE_GAMEOBJECT_H
