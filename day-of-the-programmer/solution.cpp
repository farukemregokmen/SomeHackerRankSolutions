#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'dayOfProgrammer' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER year as parameter.
 */

string dayOfProgrammer(int year) {
    string leapY = "12.09.", nleapY = "13.09.",result;
    if (year > 1918)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                result = leapY+to_string(year);
                return result;
            }
            else
            {
                result = nleapY+to_string(year);
                return result;
            }
            
        }
        
        if (year % 4 == 0)
        {
            result = leapY+to_string(year);
        }
        else
        {
            result = nleapY+to_string(year);
        }
    }
    else if(year < 1918)
    {
        if (year % 4 == 0)
        {
            result = leapY+to_string(year);
        }
        else
        {
            result = nleapY+to_string(year);
        }
    }
    else
    {
        result = "26.09.1918";
    }
    return result;
}

int main()
{
    int year = 1800;
    cout << dayOfProgrammer(year);
    return 0;
}