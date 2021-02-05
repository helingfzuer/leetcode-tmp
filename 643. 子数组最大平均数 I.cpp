#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    double findMaxAverage(vector<int>& nums, int k){
        int sum=accumulate(nums.begin(), nums.begin()+k, 0);
        int maxSum=sum;
        for(int i=k;i<nums.size();i++) sum=sum-nums[i-k]+nums[i], maxSum=max(maxSum, sum);
        return maxSum*1.0/k;
    }
};

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    vector<int> nums(n);
    for(int i=0;i<n;i++)  scanf("%d", &nums[i]);
    Solution s;
    double res=s.findMaxAverage(nums, k);
    cout<<res<<endl;
    return 0;
}