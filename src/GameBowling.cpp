#include "GameBowling.hpp"
#include "Bowling.hpp"
#include <iostream>

GameBowling::GameBowling(int argc, char* argv[])
{
        if (argc == 2) 
        {
            std::string str(argv[1]);
            if (str == "-h" || str == "-help")
            {
                std::cout << "This is program for score bowling \n" <<
                    "enter ./Bowling nameDirectoryToread to print result to screen \n" <<
                    "or ./Bowling nameDirectoryToread nameFileToSave" << std::endl;
            } 
            else
            {
                Bowling bowling;
                bowling.readDirectory(argv[1]);
                //bowling.print();
            }
        }
        if (argc == 3)
        {
            Bowling bowling;
            bowling.readDirectory(argv[1]);
            //bowling.save(argv[[2]);
        }
}

std::string GameBowling::printHelp()
{
    return "This is program for score bowling \n enter ./Bowling nameDirectoryToread to print result to screen \n or ./Bowling nameDirectoryToread nameFileToSave\n";
}
