#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    

    for(int i=0;i<t;i++){

        int n;
        cin>>n;

        long long max=LONG_LONG_MIN;
        int x;

        for(int i=2;i<=n;i++){

            int k=n/i;
            int sum=0;
            for(int i=1;i<=k;i++){
                
                sum+=i;
            }

            sum=sum*i;

            if(max<sum){
                max=sum;
                x=i;
            }

        }
        
        cout << x << endl;

    }

}