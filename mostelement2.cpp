#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> &nums)
{
    int n = nums.size();
    int cnt1=0,cnt2=0;

    int el1=INT_MIN,el2=INT_MIN;

    for(int i=0;i<n;i++){
        if(cnt1==0 && el2!=nums[i]){
            cnt1=1;
            el1=nums[i];
        }
        else if(cnt2==0 && el1!=nums[i]){
            cnt2=1;
            el2=nums[i];
        }
        else if(nums[i]==el1){
            cnt1++;
        }
        else if(nums[i]==el2){
            cnt2++;
        }
        else{
            cnt1--;
            cnt2--;
        }
    }
    cnt1=0,cnt2=0;

    for(int i=0;i<n;i++){
        if(nums[i]==el1){
            cnt1++;
        }
        if(nums[i]==el2){
            cnt2++;
        }
    }
    int min_i=n/3;
    vector<int> result;

    if(cnt1>min_i){
        result.push_back(el1);
    }
    if(cnt2>min_i){
        result.push_back(el2);
    }

    return result;
}

int main()
{
    vector<int> arr = {11, 22, 22, 11, 22};
    vector<int> ans = majorityElement(arr);

    for (auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}