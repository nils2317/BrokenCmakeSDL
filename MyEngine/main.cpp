#include "Headers/Scene.h"

int main(){
    auto *myScene = new Scene();

    myScene->CreateGameObject("Player");
    myScene->CreateGameObject("Enemy");

    myScene->FindGameObject("Player")->AddComponent<Renderer>();
    myScene->FindGameObject("Player")->AddComponent<Physics>();

    myScene->FindGameObject("Enemy")->AddComponent<Renderer>();

    myScene->FindGameObject("Player")->Update();
    myScene->FindGameObject("Enemy")->Update();

    myScene->FindGameObject("Player")->RemoveComponent<Physics>();
    myScene->FindGameObject("Player")->Update();

}