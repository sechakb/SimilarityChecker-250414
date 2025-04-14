#pragma once
#include <string>
#include <stdexcept>

using std::string;

#define IN
#define OUT

class CopyCheck
{
public:
    int CheckNumOfLetter(string str1, string str2)
    {
        int longer, shorter;

        GetLongerAndShorter(longer, shorter, str1, str2);

        int score = (2 * shorter - longer) * 60 / shorter;
        if (score < 0)
        {
            score = 0;
        }

        return score;
    }
private:
    void GetLongerAndShorter(OUT int &longer, OUT int &shorter, IN const string &str1, IN const string &str2)
    {
        int length1 = str1.length();
        int length2 = str2.length();

        if (length1 > length2)
        {
            longer = length1;
            shorter = length2;
        }
        else
        {
            longer = length2;
            shorter = length1;
        }
    }
};