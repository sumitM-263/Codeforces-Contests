#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0;i<t;i++){

        vector<int> nums;
        for(int i=0;i<3;i++){
            int x;
            cin >> x;
            nums.push_back(x);
        }

        sort(nums.begin(),nums.end());

        int v=nums[1];

        int ans=abs(nums[0]-v)+abs(nums[1]-v)+abs(nums[2]-v);

        cout << ans <<endl;

    }
}