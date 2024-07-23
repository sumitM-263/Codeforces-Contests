#include <bits/stdc++.h>
using namespace std;

long long maxProduct(vector<int>& v){

    for(int i=1;i<=5;i++){

        sort(v.begin(),v.end());
        v[0]++;
       
    }
   

    long long product=1;
    for(auto i:v){
        product*=i;
    }

    return product;
    
}

int main(){

    int t;
    cin >> t;

    for(int i=0;i<t;i++){

        vector<int> v;

        for(int i=0;i<3;i++){
            int n;
            cin >> n;
            v.push_back(n);
        }
        
        cout << maxProduct(v) <<endl;

    }
}