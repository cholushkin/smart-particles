#include "scenario.h"

#include <iostream>

namespace sandbox
{
    Scenario::Scenario(const std::string& name, const std::string& description)
        : name(name)
          , description(description)
    {
    }

    Scenario::~Scenario()
    {
        std::cout << "~Scenario\n";
    }

    const std::string& Scenario::getName() const
    {
        return name;
    }

    const std::string& Scenario::getDescription() const
    {
        return description;
    }

    void Scenario::OnGUI()
    {
        // Default implementation or leave as pure virtual if not applicable
    }

    void Scenario::Render()
    {
        // Default implementation or leave as pure virtual if not applicable
    }

    void Scenario::Update()
    {
        // Default implementation or leave as pure virtual if not applicable
    }
}
