#pragma once

#include <fstream>
#include <string>

using namespace std;

enum TypeLog { Info, Error, Success };

class ILogger {
public:
    virtual void LogInfo(string message) = 0;
    virtual void LogError(string message) = 0;
    virtual void LogSuccess(string message) = 0;
};
