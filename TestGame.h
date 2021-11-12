#pragma once

#include "LoggerHandlers.h"

using namespace std;

class TestGame {
public:
    LoggerHandlers logger;

    void Start() {
        logger.LogInfo("Start test game");
    }

    void Attack(int select) {
        switch (select) {
            case 1:
                logger.LogInfo("Attack");
                break;
            case 2:
                logger.LogError("Error attack");
                break;
            case 3:
                logger.LogSuccess("Success attack");
                break;
        }
    }

    void End() {
        logger.LogInfo("End test game");
    }
};