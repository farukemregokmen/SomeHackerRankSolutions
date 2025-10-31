#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'pageCount' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER p
 */

int pageCount(int n, int p) {
    int pageCount = 0;
    float half = static_cast<float>(n) /2;
    if (p == 1)
        return pageCount;
    if (half >= p)
    {
        pageCount++;
        for (int i = 2; i < n; i = i+2,pageCount++)
        {
            if (p == i || p == i+1)
            {
                return pageCount;
            }
        }
    }
    else
    {
        if (n % 2 == 0)
        {
            if (p == n)
                return pageCount;
            pageCount++;
            for (int i = n-1; i > 1; i= i-2,pageCount++)
            {
                if (p == i || p == i-1)
                {
                    return pageCount;
                }
            }
        }
        else
        {
        for (int i = n; i > 1; i= i-2,pageCount++)
        {
            if (p == i || p == i-1)
            {
                return pageCount;
            }
        }
        }
    }
    return -1;
}

int main()
{
    int n = 6, p = 3;
    cout << pageCount(n,p);
    return 0;
}