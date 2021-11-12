#pragma once

#include <fstream>
#include <string>

#include "ILogger.h"

using namespace std;

class LogToFile : public ILogger {
private:
    string path;
    void WriteToFile(string type, string message) {
        ofstream file(path, ios::app);
        file << "[" << type << "] : " << message << endl;
        file.close();
    }

public:
    void SetPathToFileLog(string path) {
        this->path = path;
    }

    void LogInfo(string message) override {
        WriteToFile("INFO", message);
    }

    void LogError(string message) override {
        WriteToFile("ERROR", message);
    }

    void LogSuccess(string message) override {
        WriteToFile("SUCCESS", message);
    }
};