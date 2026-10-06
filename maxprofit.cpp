#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int maxProfit = 0;
    int minPrice=prices[0];
    for(int i=1;i<prices.size();i++){
        if(minPrice>prices[i]){
            minPrice=prices[i];
        }
        int profit=prices[i]-minPrice;
        maxProfit=max(profit,maxProfit);
    }
    return maxProfit;
}

int main()
{
    vector<int> prices={10,22,47,89,2,334};
    int ans=maxProfit(prices);
    cout<<ans;
    return 0;
}