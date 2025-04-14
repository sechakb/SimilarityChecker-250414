#pragma once
#include <string>
#include <bitset>

using std::string;
using std::bitset;
using std::tolower;

#define IN
#define OUT
#define MAX_CHAR (26)

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

    int CheckAlphabet(string str1, string str2)
    {
        bitset<MAX_CHAR> set1 = GetCharSet(str1);
        bitset<MAX_CHAR> set2 = GetCharSet(str2);

        int totalCnt = (set1 | set2).count();
        int sameCnt = (set1 & set2).count();

        return sameCnt * 40 / totalCnt;
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

    bitset<MAX_CHAR> GetCharSet(const string &str)
    {
        bitset<MAX_CHAR> result;
        for (char ch : str)
        {
            result.set(tolower(ch) - 'a');
        }
        return result;
    }
};