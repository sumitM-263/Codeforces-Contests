#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        int a=n/4;
        int b=(n%4)/2;

        cout << a+b << endl;
    }
}