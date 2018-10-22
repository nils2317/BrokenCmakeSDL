//
// Created by nils.steinbuegl on 10/21/2018.
//

#include "Headers/Component.h"

void Component::Update(){
    std::cout << "Updating Component Base\n";
}

void Renderer::Update(){
    std::cout << "Updating Renderer\n";
}

void Physics::Update(){
    std::cout << "Updating Physics Component\n";
}