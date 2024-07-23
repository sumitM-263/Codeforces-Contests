#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    for(int i=0;i<t;i++){

        int n,m;
        cin >> n >>m;

        string s;
        cin >> s;

        map<char,int> mpp;

        for(char i='A';i<='G';i++){
            mpp.insert({i,0});
        }

        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }

        // for(auto it:mpp){
        //     cout << it.first << it.second <<endl;
        // }

        int count=0;

        for(auto it: mpp){
            if(it.second<m){
                count+=(m-it.second);
            }
        }
        
        cout << count << endl;
    }
}