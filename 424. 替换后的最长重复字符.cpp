#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int characterReplacement(string s, int k){
        if(s.empty())  return 0;
        int leftIndex=0, rightIndex=0, cntMax=0;
        vector<int> charCounts(26);
        while(rightIndex<s.size()){
            int tmp=s[rightIndex]-'A';
            charCounts[tmp]++, cntMax=max(cntMax, charCounts[tmp]);
            if(rightIndex-leftIndex+1-cntMax>k)  charCounts[s[leftIndex]-'A']--, leftIndex++;
            rightIndex++;
        }
        return s.size()-leftIndex;
    }
};

int main(){
    string s;
    getline(cin, s);
    int k, res;
    scanf("%d", &k);
    Solution solu;
    res=solu.characterReplacement(s, k);
    cout<<res<<endl;
    return 0;
}