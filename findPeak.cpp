#include<bits/stdc++.h>
using namespace std;
int findPeak(vector<int> &nums){
    int n=nums.size();

    for(int i=0;i<n;i++){
        bool left=(i==0)||(nums[i]>=nums[i-1]);

        bool right=(i==n-1)||(nums[i]>=nums[i+1]);

        if(left && right) return i;
    }
    return -1;
}

int main(){
    vector<int> nums={1,3,20,4,1,0};
    int index=findPeak(nums);
    cout<<nums[index];
    return 0;
}