//
// Created by nils.steinbuegl on 10/21/2018.
//

#ifndef MYENGINE_COMPONENT_H
#define MYENGINE_COMPONENT_H

#include <iostream>
#include <vector>
#include <utility>
#include <type_traits>
#include <typeindex>
#include <unordered_map>

class Component{
public:
    Component() = default;

    virtual ~Component() = default;

    virtual void Update();
};

class Renderer:public Component{
public:
    void Update() override;
};

class Physics:public Component{
public:
    void Update() override;
};


#endif //MYENGINE_COMPONENT_H
