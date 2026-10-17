#include <bits/stdc++.h>
using namespace std;

int firstoccurence(vector<int> &nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;
    int ans = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target)
        {
            ans = mid;
            right = mid - 1;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return ans;
}

int lastoccurence(vector<int> &nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;
    int ans = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target)
        {
            ans = mid;
            left = mid + 1;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return ans;
}

vector<int> searchRange(vector<int> &nums, int target)
{
    int first = firstoccurence(nums, target);
    int last = lastoccurence(nums, target);

    return {first, last};
}

int main()
{
    vector<int> a = {2, 2, 3, 4, 5, 7, 8, 8, 8, 8, 11};
    vector<int> ans = searchRange(a, 8);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}
