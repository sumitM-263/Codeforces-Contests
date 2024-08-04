#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        string s;
        cin >> s;

        map<char, int> mpp;

        for (int i = 0; i < s.size(); i++)
        {
            mpp[s[i]]++;
        }

        int score = 0;

        for (auto it : mpp)
        {
            if (it.first != '?')
            {
                if (it.second >= n)
                {
                    score += n;
                }
                else if (it.second < n)
                {
                    score += it.second;
                }
            }
        }

        cout << score << endl;
    }
}