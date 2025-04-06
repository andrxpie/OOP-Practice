#pragma once

#include "Logger.h"
#include <string>

class Email
{
private:
    std::string theme;
    std::string from;
    std::string to;

public:
    std::string GetTheme() { return theme; }
    std::string GetFrom() { return from; }
    std::string GetTo() { return to; }

    void SetTheme(std::string value) { theme = value; }
    void SetFrom(std::string value) { from = value; }
    void SetTo(std::string value) { to = value; }
};

class EmailSender
{
private:
    ILogger* logger;

public:
    EmailSender(ILogger* logger) : logger(logger) {}

    void Send(Email email)
    {
        logger->Log("Email from '" + email.GetFrom() + "' to '" + email.GetTo() + "' was sent");
    }
};
