#pragma once

#include <fstream>
#include <string>

#include "ILogger.h"

using namespace std;

class LogToConsole : public ILogger {
private:
    void WriteToConsole(string type, string message) {
        cout << "[" << type << "] : " << message << endl;
    }

public:
    void LogInfo(string message) override {
        WriteToConsole("INFO", message);
    }

    void LogError(string message) override {
        WriteToConsole("ERROR", message);
    }

    void LogSuccess(string message) override {
        WriteToConsole("SUCCESS", message);
    }
};