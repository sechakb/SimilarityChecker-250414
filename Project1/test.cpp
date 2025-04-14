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

    EXPECT_EQ(60, app.CheckNumOfLetter("ABCD", "DBCA"));
}

TEST(TS0, CheckNumOfLetterScore0)
{
    CopyCheck app;

    EXPECT_EQ(0, app.CheckNumOfLetter("ABCD", "DB"));
    EXPECT_EQ(0, app.CheckNumOfLetter("ABCD", "D"));
}

TEST(TS0, CheckNumOfLetterScore30)
{
    CopyCheck app;

    EXPECT_EQ(30, app.CheckNumOfLetter("ABC", "DB"));
}

TEST(TS0, CheckAlphabet40)
{
    CopyCheck app;

    EXPECT_EQ(40, app.CheckAlphabet("ASD", "DSA"));
    EXPECT_EQ(40, app.CheckAlphabet("AAABB", "BA"));
}

TEST(TS0, CheckAlphabet0)
{
    CopyCheck app;

    EXPECT_EQ(0, app.CheckAlphabet("ASD", "BB"));
}

TEST(TS0, CheckAlphabet20)
{
    CopyCheck app;

    EXPECT_EQ(20, app.CheckAlphabet("AA", "AAE"));
}