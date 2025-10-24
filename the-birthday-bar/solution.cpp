#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'birthday' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY s
 *  2. INTEGER d
 *  3. INTEGER m
 */

int birthday(vector<int> s, int d, int m) {
    vector<int>::iterator fakeItr;
    int numbersToSum[m];
    int sum, count = 0;
    for (auto itr = s.begin(); itr != s.end(); itr++)
    {
        sum = 0;
        fakeItr = itr;
        for (auto numbers = 0; numbers < m; numbers++,fakeItr++)
        {
            numbersToSum[numbers] = *fakeItr;
        }
        for (int sumLoop = 0; sumLoop < m; sumLoop++)
        {
            sum = sum+numbersToSum[sumLoop];
        }
        if (sum == d)
        {
            count++;
        }      
    }
    return count;
}

int main()
{
    vector<int> numbers = {4},result;
    int d = 4, m = 1;
    cout << birthday(numbers, d, m); 
    return 0;
}
