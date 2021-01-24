#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int maxSubArray(vector<int>& nums){
        if(nums.empty())  return 0;
        int res=nums[0], curSum=nums[0];
        for(int i=1;i<nums.size();i++)  curSum=max(nums[i], curSum+nums[i]), res=max(res, curSum);
        return res;
    }
};

int main(){
    int n, res;
    scanf("%d", &n);
    vector<int> nums(n);
    for(int i=0;i<n;i++)  scanf("%d", &nums[i]);
    Solution s;
    res=s.maxSubArray(nums);
    cout<<res<<endl;
    return 0;
}