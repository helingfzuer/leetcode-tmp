#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int removeDuplicates(vector<int>& nums){
        if(nums.empty())  return 0;
        int left=0;
        for(int right=1;right<nums.size();right++){
            if(nums[left]!=nums[right])  left++, nums[left]=nums[right];
        }
        return left+1;
    }
};

int main(){
    int n, res;
    scanf("%d", &n);
    vector<int> nums(n);
    for(int i=0;i<n;i++)  scanf("%d", &nums[i]);
    Solution s;
    res=s.removeDuplicates(nums);
    cout<<res<<endl;
    for(int i=0;i<res;i++)  cout<<nums[i]<<" ";
    cout<<endl;  
    return 0;
}