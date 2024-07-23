#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {

        int n, f, k;
        cin >> n >> f >> k;

        vector<int> a;
        int num;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            a.push_back(num);
        }
        
        int f_value=a[f-1];

        sort(a.begin(), a.end(), greater<int>());

        vector<int> pos;
        for(int i=0;i<a.size();i++){
            if(f_value==a[i]) pos.push_back(i+1);
        }

        int sm=0,gt=0;

        for(int i=0;i<pos.size();i++){
            if(pos[i]>k) gt++;
            else sm++;
        }

        if(sm>0 and gt>0) cout << "MAYBE" <<endl;
        else if(sm>0 and gt==0) cout << "YES" <<endl;
        else cout << "NO" << endl;
        
        
    }
}