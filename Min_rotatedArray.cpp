#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> &nums)
{
    int left = 0;
    int right = nums.size() - 1;
    while (right > left)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] > nums[right])
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }
    return nums[left];
}

int main()
{
    vector<int> a = {5, 6, 7, 8, 9, 1, 2};
    int ans = findMin(a);
    cout << ans;
    return 0;
}