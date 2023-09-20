#pragma once

#include "Core.h"

namespace Nightmare
{
    class Application
    {
    private:
        /* data */
    public:
        Application(/* args */);
        virtual ~Application();
        void Run();
    };

    Application *CreateApplication();

} // namespace Nightmare
