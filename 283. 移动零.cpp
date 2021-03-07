#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    void moveZeroes(vector<int>& nums){
        if(nums.empty())  return;
        int i=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=0)  nums[i++]=nums[j];
        }
        while(i<nums.size())  nums[i++]=0;
    }
};

int main(){
    int n;
    scanf("%d", &n);
    vector<int> nums(n);
    for(int i=0;i<n;i++)  scanf("%d", &nums[i]);
    Solution s;
    s.moveZeroes(nums);
    for(int i=0;i<n;i++)  cout<<nums[i]<<" ";
    return 0;
}