#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int numRabbits(vector<int>& answers){
        if(answers.empty())  return 0;
        unordered_map<int, int> mp;
        int n=answers.size(), res=0;
        for(int i=0;i<n;i++)  mp[answers[i]]++;
        for(auto iter=mp.begin();iter!=mp.end();iter++)  res+=(iter->second+iter->first)/(iter->first+1)*(iter->first+1);
        return res;
    }
};

int main(){
    int n, res;
    scanf("%d", &n);
    vector<int> answers(n);
    for(int i=0;i<n;i++)  scanf("%d", &answers[i]);
    Solution s;
    res=s.numRabbits(answers);
    cout<<res<<endl; 
    return 0;
}