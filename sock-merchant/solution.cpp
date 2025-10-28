#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'sockMerchant' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER_ARRAY ar
 */

int sockMerchant(int n, vector<int> ar) {
    int pairs = 0,eachNumber = 0,currentNum = 0;
    sort(ar.begin(),ar.end());
    for (auto itr = ar.begin(); itr != ar.end(); itr++)
    {
        if (itr == ar.begin())
        {
            currentNum = *itr;
            eachNumber++;
            continue;
        }
        else
        {
            if (*itr == currentNum)
            {
                eachNumber++;
            }
            else
            {
                if (eachNumber >= 2)
                {
                    pairs = pairs + eachNumber/2;
                }
                eachNumber = 1;
                currentNum= *itr;
            }
            
        }
    }
    if (eachNumber >= 2)
    {
        pairs = pairs + eachNumber/2;
    }
    return pairs;
}

int main()
{
    int n = 9;
    vector<int> ar={4,5,5,5,6,6,4,1,4,4,3,6,6,3,6,1,4,5,5,5};
    cout << sockMerchant(n, ar);
    return 0;
}
