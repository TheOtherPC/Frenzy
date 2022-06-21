//
// Created by Pranav on 6/19/22.
//

#pragma once
#ifndef FRENZY_ENTRYPOINT_H
#define FRENZY_ENTRYPOINT_H

//#include "Log.h"

extern Frenzy::Application* Frenzy::CreateApplication();

int main(int argc, char** argv){
    Frenzy::Log::Init();
    FZ_CORE_WARN("Initialized Log!");
    int a = 5;
    FZ_INFO("Hello! Var={0}", a);
    auto app = Frenzy::CreateApplication();
    app->Run();
    delete app;
}

#endif //FRENZY_ENTRYPOINT_H
