#pragma once

// #ifdef PLATFORM_WINDOWS

extern Nightmare::Application *Nightmare::CreateApplication();

int main(int argc, char **argv)
{
    auto app = Nightmare::CreateApplication();
    app->Run();
    delete app;
}

// #endif