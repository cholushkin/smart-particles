#ifndef SANDBOX_H
#define SANDBOX_H

#include "scenario-list.h"

namespace sandbox
{
    class Sandbox
    {
    public:
        Sandbox(std::vector<IScenario*>& scenarios);
        ~Sandbox();

    private:
        std::vector<IScenario*>& _scenarios;

        void DeleteScenarios() const;
    };
}

#endif // SANDBOX_H
