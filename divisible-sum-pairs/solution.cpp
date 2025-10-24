#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'divisibleSumPairs' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER k
 *  3. INTEGER_ARRAY ar
 */

int divisibleSumPairs(int n, int k, vector<int> ar) {
    int sumCheck, result = 0;
    for (auto itr = ar.begin(); itr != ar.end(); itr++)
    {
        sumCheck = 0;
        for (auto itr2 = itr+1; itr2 != ar.end(); itr2++)
        {
            sumCheck = *itr + *itr2;
            if (sumCheck % k == 0)
            {
                result++;
            }
            
        }
        
    }
    return result;
}

int main()
{
    int n = 6, k = 3;
    vector<int> ar{1, 3, 2, 6, 1, 2};
    cout << divisibleSumPairs(n, k, ar);

    return 0;
}
