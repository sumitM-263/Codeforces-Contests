#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> makeSubarray(vector<int>& nums){

    vector<vector<int>> subArr;

    for(int i=0;i<nums.size();i++){
        vector<int> arr={nums[i]};
        for(int j=i+1;j<nums.size();j++){
            arr.push_back(nums[j]);
            subArr.push_back(arr);
        }
    }

    return subArr;
}

int minXor(vector<int>& arr){
    int n=arr.size();

    int i=0;
    int j=i+1;

    vector<int> xorArr;

    while(i<n and j<n){
        int xorValue=arr[i]^arr[j];
        xorArr.push_back(xorValue);
        i++,j++;
    }

    int reqVal=INT_MAX;

    for(int i=0;i<xorArr.size();i++){
        if(xorArr[i]<reqVal) reqVal=min(reqVal,xorArr[i]);
    }

    return reqVal;
}

int kthSmallest(vector<int>& nums,int k){

    vector<vector<int>> subArr=makeSubarray(nums);
    
    vector<int> minXorArr;

    for(int i=0;i<subArr.size();i++){
        int minVal=minXor(subArr[i]);
        minXorArr.push_back(minVal);
    }


    sort(minXorArr.begin(),minXorArr.end());

    return minXorArr[k-1];

}

int main(){

   int t;
   cin >>t ;


   for(int i=0;i<t;i++){
    
    int n,k;
    cin >> n >> k;

    vector<int> nums;

    for(int j=0;j<n;j++){
        int num;
        cin >> num;
        nums.push_back(num);
    }

    cout << kthSmallest(nums,k) <<" "<<endl;
   }
    return 0;
}