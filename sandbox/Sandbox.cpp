#include <Nightmare.h>

class Sandbox : public Nightmare::Application
{
public:
    Sandbox() {}
    ~Sandbox() {}
};

Nightmare::Application *Nightmare::CreateApplication()
{
    return new Sandbox();
}