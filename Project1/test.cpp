#include "gmock/gmock.h"
#include "CopyCheck.h"

int main()
{
    ::testing::InitGoogleMock();
    return RUN_ALL_TESTS();
}

TEST(TS0, CheckNumOfLetterScore60)
{
    CopyCheck app;

    EXPECT_EQ(60, app.CheckScore_NumOfLetter("ABCD", "DBCA"));
}

TEST(TS0, CheckNumOfLetterScore0)
{
    CopyCheck app;

    EXPECT_EQ(0, app.CheckScore_NumOfLetter("ABCD", "DB"));
    EXPECT_EQ(0, app.CheckScore_NumOfLetter("ABCD", "D"));
}

TEST(TS0, CheckNumOfLetterScore30)
{
    CopyCheck app;

    EXPECT_EQ(30, app.CheckScore_NumOfLetter("ABC", "DB"));
}

TEST(TS0, CheckAlphabet40)
{
    CopyCheck app;

    EXPECT_EQ(40, app.CheckScore_Alphabet("ASD", "DSA"));
    EXPECT_EQ(40, app.CheckScore_Alphabet("AAABB", "BA"));
}

TEST(TS0, CheckAlphabet0)
{
    CopyCheck app;

    EXPECT_EQ(0, app.CheckScore_Alphabet("ASD", "BB"));
}

TEST(TS0, CheckAlphabet20)
{
    CopyCheck app;

    EXPECT_EQ(20, app.CheckScore_Alphabet("AA", "AAE"));
}