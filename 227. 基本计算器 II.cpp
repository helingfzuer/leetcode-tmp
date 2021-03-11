#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int calculate(string s){
        int res=0;
        if(s.empty())  return res;
        vector<int> nums;
        int num=0, n=s.size();
        char preSign='+';
        for(int i=0;i<n;i++){
            if(isdigit(s[i]))  num=num*10+int(s[i]-'0');
            if((!isdigit(s[i])&&s[i]!=' ')||i==n-1){
                if(preSign=='+'||preSign=='-')  preSign=='+'?  nums.push_back(num): nums.push_back(-num);
                else preSign=='*'? nums.back()*=num: nums.back()/=num;
                preSign=s[i], num=0;
            }
        }
        return accumulate(nums.begin(), nums.end(), 0);
    }
};

int main(){
    string s;
    getline(cin, s);
    Solution solu;
    int res=solu.calculate(s);
    cout<<res<<endl;
    return 0;
}