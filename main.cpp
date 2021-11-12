#include <iostream>

#include "ILogger.h"
#include "LogToConsole.h"
#include "LogToFile.h"
#include "TestGame.h"

using namespace std;

int main() {
    TestGame game;

    auto* logToFile = new LogToFile();
    logToFile->SetPathToFileLog("game.log");

    auto* logToConsole = new LogToConsole();

    game.logger.AddHandler(logToFile);
    game.logger.AddHandler(logToConsole);

    game.Start();
    game.Attack(1);
    game.Attack(2);
    game.Attack(3);
    game.End();
}
