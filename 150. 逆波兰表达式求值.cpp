#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int evalRPN(vector<string>& tokens){
        stack<int> nums;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/"){
                int a=nums.top(), b;
                nums.pop(), b=nums.top(), nums.pop();
                tokens[i]=="+"? nums.emplace(b+a): (tokens[i]=="-"? nums.emplace(b-a): (tokens[i]=="*"? nums.emplace(b*a): nums.emplace(b/a)));
            }
            else nums.emplace(stoi(tokens[i]));
        }
        return nums.top();
    }
};

int main(){
    int n;
    scanf("%d", &n);
    char c=getchar();
    vector<string> tokens(n);
    for(int i=0;i<n;i++)  getline(cin, tokens[i]);
    Solution s;
    int res=s.evalRPN(tokens);
    cout<<res<<endl;
    return 0;
}