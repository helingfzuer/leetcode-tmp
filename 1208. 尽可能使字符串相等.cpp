#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int equalSubstring(string s, string t, int maxCost){
        int res=0, n=s.size(), leftIndex=0, rightIndex=0, cost=0;
        while(rightIndex<n){
            cost+=abs(s[rightIndex]-t[rightIndex]);
            while(cost>maxCost)  cost-=abs(s[leftIndex]-t[leftIndex]), leftIndex++;
            res=max(res, rightIndex-leftIndex+1), rightIndex++;
        }
        return res;
    }
};

int main(){
    string s, t;
    getline(cin, s);
    getline(cin, t);
    int maxCost, res;
    scanf("%d", &maxCost);
    Solution solu;
    res=solu.equalSubstring(s, t, maxCost);
    cout<<res<<endl;
    return 0;
}