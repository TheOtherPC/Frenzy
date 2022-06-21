//
// Created by Pranav on 6/19/22.
//

#include "Application.h"

#include "Frenzy/Events/ApplicationEvent.h"
#include "Frenzy/Log.h"

namespace Frenzy {
    Application::Application() {}

    Application::~Application() {

    }

    void Application::Run(){
        WindowResizeEvent e(1280, 720);
        if(e.IsInCategory(EventCategoryApplication)) {
            FZ_TRACE(e);
        }

        if(e.IsInCategory(EventCategoryInput)) {
            FZ_TRACE(e);
        }

        while(true);
    }
}
