#pragma once
#include <vector>
#include "Game.hpp"

class Line
{
    int numberOfGames_;
    std::vector<Game> lines_;
public:
    Line();
    void addGame(const std::string & packedData);
    Game getGame(int number) const;
    int getNumberOfGames() const;
};
