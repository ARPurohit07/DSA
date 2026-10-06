#include <bits/stdc++.h>
using namespace std;

vector<int> threeSum(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int left = i + 1;
        int right = n - 1;
        while (left < right)
        {
            int sum = nums[i] + nums[left] + nums[right];

            if (sum == target)
            {
                return {nums[i], nums[left], nums[right]};

                left++;
                right--;
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
    return {0};
}

int main()
{
    vector<int> arr = {0, 1, 3, 2, 4, 3, 5, 6};
    int target = 10;

    vector<int> ans = threeSum(arr, target);

    for (int x : ans)
    {
        cout << x << " ";
    }
    return 0;
}