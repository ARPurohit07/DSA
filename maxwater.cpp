#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &heights)
{

    int maxwater = 0;
    int left = 0;
    int right = heights.size() - 1;
    while (left < right)
    {
        int w = right - left;
        int h = min(heights[left], heights[right]);
        int area = w * h;
        maxwater = max(maxwater, area);
        if (heights[left] < heights[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return maxwater;
}

int main()
{
    vector<int> heights = {11, 2, 34, 56, 9, 10};
    int ans = maxArea(heights);
    cout << ans;
    return 0;
}