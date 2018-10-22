//
// Created by nils.steinbuegl on 10/21/2018.
//

#include "Headers/GameObject.h"

void GameObject::Update(){
    for(auto &pair : mComponents){
        pair.second->Update();
    }
}

template <typename T>
Component* GameObject::AddComponent(){
    auto newComponent = (mComponents[typide(T)] = std::make_unique<T>()).get();
    return newComponent;
}

template <typename T>
Component* GameObject::GetComponent(){
    if(mComponents.count(typeid(T)) != 0)
    {
        return mComponents[typeid(T)].get();
    }
    else
    {
        return nullptr;
    }
}

template <typename T>
void GameObject::FindComponent(){
    if(mComponents.count(typeid(T)) != 0)
    {
        std::cout << "This Object has a " << T << std::endl;
    }
    else
    {
        std::cout << "This Object does not have a " << T << std::endl;
    }
}

template <typename T>
void GameObject::RemoveComponent(){
    if(mComponents.count(typeid(T)) != 0)
    {
        mComponents[typeid(T)].reset();
    }
}