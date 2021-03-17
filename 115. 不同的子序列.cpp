#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int numDistinct(string s, string t){
        int m=s.size(), n=t.size();
        if(m<n)  return 0;
        vector<vector<long long> > dp(m+1, vector<long long> (n+1));
        for(int i=0;i<=m;i++)  dp[i][n]=1;
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--)  s[i]==t[j]? dp[i][j]=dp[i+1][j+1]+dp[i+1][j]: dp[i][j]=dp[i+1][j];
        }
        return dp[0][0];
    }
};

int main(){
    string s,t;
    getline(cin, s);
    getline(cin, t);
    Solution solution;
    int res=solution.numDistinct(s, t);
    cout<<res<<endl;
    return 0;
} 
