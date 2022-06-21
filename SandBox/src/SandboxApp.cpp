//
// Created by Pranav on 6/19/22.
//

#include <Frenzy.h>

class Sandbox : public Frenzy::Application{
public:
    Sandbox(){

    }
    ~Sandbox(){

    }
};

Frenzy::Application* Frenzy::CreateApplication(){
    return new Sandbox();
}
