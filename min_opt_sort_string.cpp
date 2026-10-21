#include <bits/stdc++.h>
using namespace std;

int min_opt(string s)
{
    int n = s.size();

    if (is_sorted(s.begin(), s.end()))
    {
        return 0;
    }
    if (n == 2)
    {
        return -1;
    }
    char mn = *min_element(s.begin(), s.end());
    char mx = *max_element(s.begin(), s.end());

    if (s[0] == mn || s[n - 1] == mx)
    {
        return 1;
    }
    int minCount = count(s.begin(), s.end(), mn);
    int maxCount = count(s.begin(), s.end(), mx);

    if (s[0] == mx && s[n - 1] == mn && minCount == 1 && maxCount == 1)
    {
        return 3;
    }
    return 2;
}

int main()
{
    string s = "cars";
    int ans = min_opt(s);
    cout << ans;
    return 0;
}