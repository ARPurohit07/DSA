#include<bits/stdc++.h>
using namespace std;

int no_ofGasStationRequired(long double dist, vector<int> &arr){
    int n = arr.size();
    int cnt = 0;

    for(int i = 1; i < n; i++){
        long double gap = arr[i] - arr[i-1];
        int noInBetween = (int)(gap / dist);

        if(abs(gap - dist * noInBetween) < 1e-9){
            noInBetween--;
        }

        cnt += noInBetween;
    }
    return cnt;
}

long double minmaxDist(vector<int> &arr, int k){
    int n = arr.size();
    long double low = 0, high = 0;

    for(int i = 0; i < n - 1; i++){
        high = max(high, (long double)(arr[i+1] - arr[i]));
    }

    long double diff = 1e-6;

    while(high - low > diff){
        long double mid = (low + high) / 2.0;
        int cnt = no_ofGasStationRequired(mid, arr);

        if(cnt > k) low = mid;
        else high = mid;
    }

    return high;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 4;

    long double ans = minmaxDist(arr, k);
    cout << ans;

    return 0;
}