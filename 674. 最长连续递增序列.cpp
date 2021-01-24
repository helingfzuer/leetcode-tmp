#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int findLengthOfLCIS(vector<int>& nums){
        if(nums.empty())  return 0;
        int res=1, curLength=1;
        for(int i=1;i<nums.size();i++)   nums[i]>nums[i-1]? (curLength++, res=max(res, curLength)): curLength=1;
        return res;
    }
};

int main(){
    int n, res;
    scanf("%d", &n);
    vector<int> nums(n);
    for(int i=0;i<n;i++)  scanf("%d", &nums[i]);
    Solution s;
    res=s.findLengthOfLCIS(nums);
    cout<<res<<endl;
    return 0;
}