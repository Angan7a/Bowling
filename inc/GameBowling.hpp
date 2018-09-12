#pragma once
#include <string>

class BaseGameBowling
{
public:
    virtual ~BaseGameBowling();
    virtual std::string printHelp();
};

class GameBowling : public BaseGameBowling
{
public:
    GameBowling(int argc, char* argv[]);
    std::string printHelp();
};
