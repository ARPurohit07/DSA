#include<bits/stdc++.h>
using namespace std;

int CalculateTotalHours(vector<int> &piles,int speed){
    int totalH=0;
    for(int bananas:piles){
        totalH+=ceil((double)bananas/speed);
    }
    return totalH;
}
int minEatingSpeed(vector<int> &piles,int h){
    int maxPile=*max_element(piles.begin(),piles.end());
    int low=0,high=maxPile;
    int ans=maxPile;
    while(low<=high){
        int mid=(low+high)/2;
        int totalH=CalculateTotalHours(piles,mid);
        if(totalH<=h){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> a={7, 15, 6, 3};
    int h=8;
    cout<<minEatingSpeed(a,h);
    return 0;
}