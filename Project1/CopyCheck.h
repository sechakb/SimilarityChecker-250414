#pragma once
#include <string>
#include <stdexcept>

using std::string;

class CopyCheck
{
public:
    int CheckNumOfLetter(string str1, string str2)
    {
        int longer, shorter;
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

        int score = (2 * shorter - longer) * 60 / shorter;
        if (score < 0)
        {
            score = 0;
        }

        return score;
    }
private:
};