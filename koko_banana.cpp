#include <bits/stdc++.h>
using namespace std;

int minEatingSpeed(vector<int> &piles, int h)
{
    int left = 1;
    int right = *max_element(piles.begin(), piles.end());

    while (left < right)
    {
        int mid = left + (right - left) / 2;

        long long hours = 0;

        for (int p : piles)
        {
            hours += (p + (long long)mid - 1) / mid;
        }
        if (hours <= h)
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }
    return left;
}

int main()
{
    vector<int> p = {30, 11, 23, 4, 20};
    int h = 11;
    int ans = minEatingSpeed(p, h);
    cout << ans;
    return 0;
}