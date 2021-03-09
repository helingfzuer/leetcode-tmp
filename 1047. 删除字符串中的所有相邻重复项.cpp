#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    string removeDuplicates(string S){
        if(S.empty())  return S;
        string res;
        for(int i=0;i<S.size();i++){
            if(res.empty()||res.back()!=S[i])  res.push_back(S[i]);
            else res.pop_back();
        }
        return res;
    }
};

int main(){
    string S;
    getline(cin, S);
    Solution s;
    string res=s.removeDuplicates(S);
    cout<<res<<endl;
    return 0;
}