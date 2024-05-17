#include "sandbox.h"

namespace sandbox
{
    Sandbox::Sandbox(std::vector<IScenario*>& scenarios)
        : _scenarios(scenarios)
    {
    }

    Sandbox::~Sandbox()
    {
        DeleteScenarios();
    }

    void Sandbox::DeleteScenarios() const
    {
        for (IScenario* ptr : _scenarios)
            delete ptr;
        _scenarios.clear();
    }
}
