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