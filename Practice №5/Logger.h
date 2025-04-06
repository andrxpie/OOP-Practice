#pragma once

#include <iostream>
#include <string>

class ILogger
{
public:
    virtual void Log(std::string message) = 0;
    virtual ~ILogger() {}
};

class ConsoleLogger : public ILogger
{
public:
    void Log(std::string message) override
    {
        std::cout << message << "\n";
    }
};
