#pragma once
#include <vector>
#include "Line.hpp"
#include <boost/filesystem.hpp>
#include <boost/filesystem/fstream.hpp>
using namespace boost::filesystem;

class Bowling
{
    int numberOfLines_;
    std::vector<Line> lines_;
public:
    Bowling();
    void addLine(Line line);
    Line getLine(int number) const;
    int getNumberOfLines() const;
    void readDirectory(path p);
};
