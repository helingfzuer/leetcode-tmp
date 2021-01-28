#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int pivotIndex(vector<int>& nums){
        if(nums.empty())  return -1;
        int n=nums.size(), sum=accumulate(nums.begin(), nums.end(), 0), leftSum=0;
        for(int i=0;i<n;i++){
            if(leftSum*2==sum-nums[i])  return i;
            leftSum+=nums[i];
        }
        return -1;
    }
};

int main(){
    int n, res;
    scanf("%d", &n);
    vector<int> nums(n);
    for(int i=0;i<n;i++)  scanf("%d", &nums[i]);
    Solution s;
    res=s.pivotIndex(nums);
    cout<<res<<endl;
    return 0;
}