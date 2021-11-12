#pragma once

#include <list>
#include "ILogger.h"

using namespace std;

class LoggerHandlers {
private:
    list<ILogger*> loggers;

    void Log(TypeLog type, string message) {
        if (!loggers.empty()) {
            for (auto logger : loggers) {
                switch (type) {
                    case TypeLog::Info:
                        logger->LogInfo(message);
                        break;
                    case TypeLog::Error:
                        logger->LogError(message);
                        break;
                    case TypeLog::Success:
                        logger->LogSuccess(message);
                        break;
                }
            }
        }
    }

public:
    void AddHandler(ILogger* logger) {
        loggers.push_back(logger);
    }

    void LogInfo(string message) {
        Log(TypeLog::Info, message);
    }

    void LogError(string message) {
        Log(TypeLog::Error, message);
    }

    void LogSuccess(string message) {
        Log(TypeLog::Success, message);
    }
};