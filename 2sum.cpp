#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {
        int left = i;
        int right = n - 1;
        while (left < right)
        {
            int sum = nums[left] + nums[right];
            if (sum == target)
            {
                return {nums[left], nums[right]};
                right++;
                left--;
            }
            else if (sum < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }
}

int main()
{
    vector<int> arr = {0, 2, 3, 6, 3, 1, 7, 5, 9, 4};
    int target = 9;
    vector<int> ans = twoSum(arr, target);
    for (int x : ans)
    {
        cout << x << " ";
    }
    return 0;
}