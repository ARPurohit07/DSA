#include<bits/stdc++.h>
using namespace std;

int lengthofLongestSubtring(string s){
    unordered_map<char, int> freq;

    int left=0;
    int maxLength=0;

    for(int right=0;right<s.length();right++){
        freq[s[right]]++;
        while(freq[s[right]]>1){
            freq[s[left]]--;
            left++;
        }
        int length=right-left+1;
        maxLength=max(maxLength,length);
    }
    return maxLength;
}

int main()
{
    string s="abcdeabcdefbecdbfgbhtyu";
    int maxsublength=lengthofLongestSubtring(s);
    cout<<maxsublength;
}