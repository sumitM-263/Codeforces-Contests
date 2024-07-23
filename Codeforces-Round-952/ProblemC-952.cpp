#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>> t;

    for(int i=0;i<t;i++){

        int n;
        cin>>n;

        vector<int> arr(n);

        for(int i=0;i<n;i++) cin >> arr[i];

        long long m=LONG_LONG_MIN;

        int count=0;

        long long sum=0;

        for(int i=0;i<n;i++){

            if(m<arr[i]) m=arr[i];

            sum+=arr[i];

            if(sum-m==m) count++;

        }

        cout << count <<endl;

    }
}