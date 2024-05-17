#include <vector>
#include "scenario-list.h"

namespace sandbox
{
    // Add your scenarios here
    std::vector<IScenario*> gScenarioList = {
        new Scenario("Empty scenario 1", "Empty scenario instance 1"),
        new Scenario("Empty scenario 2", "Empty scenario instance 2")
    };
}
