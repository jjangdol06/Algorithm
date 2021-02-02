#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// int main(void)
// {

//     vector<pair<int, string>> v;
//     v.push_back(pair<int, string>(90, "강지연"));
//     v.push_back(pair<int, string>(94, "김서영"));
//     v.push_back(pair<int, string>(95, "김서현"));
//     v.push_back(pair<int, string>(93, "나동빈"));
//     v.push_back(pair<int, string>(91, "박한우"));

//     sort(v.begin(), v.end());
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i].second << ' ';
//     }

//     return 0;
// }

bool compare(pair<string, pair<int, int>> a, pair<string, pair<int, int>> b)
{
    if (a.second.first == b.second.first)
    {
        return a.second.second < b.second.second;
    }
    else
    {
        return a.second.first > b.second.first;
    }
}

int main(void)
{
    vector<pair<string, pair<int, int>>> v;
    v.push_back(pair<string, pair<int, int>>("강지연", make_pair(90, 19971023)));
    v.push_back(pair<string, pair<int, int>>("김서현", make_pair(90, 19971022)));
    v.push_back(pair<string, pair<int, int>>("김서영", make_pair(94, 19971025)));
    v.push_back(pair<string, pair<int, int>>("나동빈", make_pair(93, 19971023)));
    v.push_back(pair<string, pair<int, int>>("박한우", make_pair(96, 19971027)));

    sort(v.begin(), v.end(), compare);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << ' ';
    }

    return 0;
}