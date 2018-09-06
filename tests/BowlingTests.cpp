#include <gtest/gtest.h>
#include "Bowling.hpp"

struct BowlingTests : public ::testing::Test
{
};

TEST_F(BowlingTests, readFile_expect_name_Andrzej_____)
{
    Bowling bowling;
    bowling.readDirectory("../data");
    ASSERT_EQ("Andrzej : | X | 34 |", bowling.getLine(0).getGame(0).getName());
    ASSERT_EQ(2, bowling.getNumberOfLines());
}
