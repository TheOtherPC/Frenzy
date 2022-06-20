//
// Created by Pranav on 6/19/22.
//

#pragma once
#ifndef FRENZY_APPLICATION_H
#define FRENZY_APPLICATION_H


namespace Frenzy {
    class Application {
    public:
        Application();

        virtual ~Application();

        void Run();
    };

    Application* CreateApplication();
}


#endif //FRENZY_APPLICATION_H
