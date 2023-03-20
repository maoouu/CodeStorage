#include <iostream>
/**
 *      This time no story, no theory. The examples show you how
 *      to write function accum():
 * 
 *      accum("abcd")    -> "A-Bb-Ccc-Dddd"
 *      accum("RqaEzty") -> "R-Qq-Eeee-Zzzzz-Tttttt-Yyyyyyy"
 *      accum("cwAt")    -> "C-Ww-Aaa-Tttt"
 * 
 *      The parameter of accum is a string which includes only
 *      letters from [a...z] and [A..Z]
 */

std::string accum(const std::string sample)
{
    std::string newSample = ""; // create string placeholder

    for (int i = 0; i < sample.length(); i++)
    {
        newSample.append("-");           // append hyphen
        newSample += toupper(sample[i]); // append upper letter

        for (int j = 0; j < i; j++) // append repeated lower letter
        {
            newSample += tolower(sample[i]);
        }

        //newSample.append("-");
    }

    return newSample.substr(1); // trimleft, since hyphen is appended first
    //return newSample.substr(0, newSample.size() - 1); // return trimmed result
}

int main()
{
    // Test Sample
    std::string sample[] = {"abcd", "RqaEzty", "cwAt"};

    // Test Iterator
    for (auto var : sample)
        std::cout << accum(var) << std::endl;

    return 0;
}
