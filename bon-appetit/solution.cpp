#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'bonAppetit' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY bill
 *  2. INTEGER k
 *  3. INTEGER b
 */

void bonAppetit(vector<int> bill, int k, int b) {
    int annaSP = 0;
    int wheresItr = 0;
    for (auto itr = bill.begin(); itr != bill.end(); itr++, wheresItr++)
    {
        if (wheresItr == k)
        {
            continue;
        }
        else
        {
            annaSP+= *itr;
        }
    }
    annaSP = annaSP/2;
    if (b > annaSP)
    {
        cout << b - annaSP;
    }
    else
    {
        cout << "Bon Appetit";
    }
}

int main()
{   
    vector<int> bill = {3,10,2,9};
    int k = 1, b = 7;
    bonAppetit(bill, k, b);

    return 0;
}