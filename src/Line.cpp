#include "Line.hpp"

Line::Line() : numberOfGames_(0) {}

void Line::addGame(const std::string & packedData)
{
    numberOfGames_++;
    Game game(packedData);
    lines_.push_back(game);
}

Game Line::getGame(int number) const
{
    return lines_[number];
}

int Line::getNumberOfGames() const
{
    return numberOfGames_;
}
