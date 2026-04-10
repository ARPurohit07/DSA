#include<bits/stdc++.h>
using namespace std;

vector<int> findMissingRepeatingNum(vector<int>&nums){
    int n=nums.size();
    int repeating=-1,missing=-1;

    for(int i=0;i<=n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(nums[j]==i) cnt++;
        }
        if(cnt==2) repeating=i;
        else if(cnt==0) missing=i;

        if(repeating!=-1&&missing!=-1){
            break;
        }
    }
    return{repeating,missing};
}

int main()
{
    vector<int> nums={3,1,2,5,4,6,7,5};

    vector<int> ans=findMissingRepeatingNum(nums);

    cout<<"Repeating and missing numbers are{"<<ans[0]<<" "<<ans[1]<<"} \n";
    return 0;
}