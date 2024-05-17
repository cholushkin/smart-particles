#ifndef SCENARIO_H
#define SCENARIO_H

#include <string>

namespace sandbox
{
    // Interface IScenario
    class IScenario
    {
    public:
        virtual ~IScenario() = default;

        virtual const std::string& getName() const = 0;
        virtual const std::string& getDescription() const = 0;
        virtual void OnGUI() = 0;
        virtual void Render() = 0;
        virtual void Update() = 0;
    };

    // Base class Scenario
    class Scenario : public IScenario
    {
    public:
        Scenario(const std::string& name, const std::string& description);

        ~Scenario() override;

        virtual const std::string& getName() const override;

        virtual const std::string& getDescription() const override;

        virtual void OnGUI() override;

        virtual void Render() override;

        virtual void Update() override;

    private:
        std::string name;
        std::string description;
    };
}

#endif // SCENARIO_H
