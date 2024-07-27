#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    for(int i=0;i<t;i++){

        long long n,m;
        cin >> n >> m;

        vector<int> flowers(n);
        for(int i=0;i<n;i++){
            int a;
            cin >> a;
            flowers[i]+=a;
        }

        sort(flowers.begin(),flowers.end());

        int x=0;
        int y=0;

        long long sum=0;
        long long ans=LONG_LONG_MIN;

        while(y<n){
            
        }
    return 0;
}