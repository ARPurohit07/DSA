#include<bits/stdc++.h>
using namespace std;

int noInversions(vector<int> &a)
{
    int n=a.size();
    int cnt=0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]) cnt++;
        }
    }
    return cnt;
}

int main()
{
    vector<int> a={5,4,3,2,1};
    int cnt=noInversions(a);

    cout<<"Number of inversions are: "<<cnt<<endl;
    return 0;
}