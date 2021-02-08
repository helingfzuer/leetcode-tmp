#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int maxTurbulenceSize(vector<int>& A){
        // 滑动窗口
        // int res=1, left=0, right=0;
        // while(right<A.size()-1){
        //     if(left==right){
        //         if(A[left]==A[left+1])  left++;
        //         right++;
        //     }
        //     else{
        //         if((A[right-1]>A[right]&&A[right+1]>A[right])||(A[right-1]<A[right]&&A[right+1]<A[right]))  right++;
        //         else left=right;
        //     }
        //     res=max(res, right-left+1);
        // }
        // return res;

        // 动态规划
        int n=A.size(), res=1, dp0=1, dp1=1;
        for(int i=1;i<n;i++){
            if(A[i-1]>A[i])  dp0=dp1+1, dp1=1;
            else A[i-1]<A[i]? (dp1=dp0+1, dp0=1): (dp0=1, dp1=1);
            res=max(res, max(dp0, dp1));
        }
        return res;
    }
};

int main(){
    int n, res;
    scanf("%d", &n);
    vector<int> nums(n);
    for(int i=0;i<n;i++)  scanf("%d", &nums[i]);
    Solution s;
    res=s.maxTurbulenceSize(nums);
    cout<<res<<endl;
    return 0;
}