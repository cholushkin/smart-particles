#include "application.h"
#include "scenario-list.h"

Application::Application()
    : sandbox(sandbox::gScenarioList)
{
}