cmake_minimum_required(VERSION 3.20)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp ILogger.h LogToFile.h LogToConsole.h TestGame.h LoggerHandlers.h)
