#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {

        int n, k;

        cin >> n >> k;

        if (k == 0)
        {
            cout << 0 << endl;
            
        }

        else{
            int cnt = 0;
        int a = n;

        while (k > 0)
        {

            if (a == n)
            {
                k -= a;
                cnt += 1;
            }

            else if (k > a)
            {
                k -= 2 * a;
                cnt += 2;
            }

            else if (k <= a)
            {
                k -= a;
                cnt += 1;
            }
            a -= 1;
        }

        cout << cnt << endl;
        }
    }
}