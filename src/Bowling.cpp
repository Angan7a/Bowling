#include "Bowling.hpp"

Bowling::Bowling() : numberOfLines_(0) {}

void Bowling::addLine(Line line)
{
    numberOfLines_++;
    lines_.push_back(line);
}

Line Bowling::getLine(int number) const
{
    return lines_[number];
}

int Bowling::getNumberOfLines() const
{
    return numberOfLines_;
}

void Bowling::readDirectory(path p)
{
    if (is_directory(p))
    {
        std::vector<path> v;
        for (auto&& x : directory_iterator(p))
            v.push_back(x.path());
        std::sort(v.begin(), v.end());
        for (auto&& x : v)
        {
            if (is_regular_file(x))
            {
                Line line;
                ifstream file {x};
                std::string packedData;
                while (std::getline(file, packedData))
                {
                    line.addGame(packedData);
                }
                addLine(line);
                file.close();
            } else
            {
                //message about wrong file
            }
        }
    } else
    {
        //message abour wrong directory
    }
}
