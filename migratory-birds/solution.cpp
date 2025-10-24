#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'migratoryBirds' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int migratoryBirds(vector<int> arr) {
    int varr;
    vector<pair<int,int>> numbers{{1,0},{2,0},{3,0},{4,0},{5,0}};
    for (auto itr = arr.begin(); itr != arr.end(); itr++)
    {
        varr = *itr;
        switch (varr)
        {
        case 1:
            numbers[0].second++;
            break;
        case 2:
            numbers[1].second++;
            break;
        case 3:
            numbers[2].second++;
            break;
        case 4:
            numbers[3].second++;
            break;
        case 5:
            numbers[4].second++;
            break;
        default:
            break;
        }
    }
    sort(numbers.begin(),numbers.end(),[](auto a, auto b){
        return a.second > b.second;
    });
    // for (auto i = 0; i != numbers.size(); i++)
    // {
    //     cout << numbers[i].first << " : " << numbers[i].second << endl;
    // }
    
    return numbers[0].first;
}

int main()
{
    vector<int> arr{5, 5, 5, 4, 4, 3, 2, 1, 1, 1};
    cout << migratoryBirds(arr);
    return 0;
}
