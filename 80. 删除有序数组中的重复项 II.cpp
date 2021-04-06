#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int removeDuplicates(vector<int>& nums){
        int n=nums.size();
        if(n<=2)  return n;
        int left=2;
        for(int right=2;right<n;right++){
            if(nums[left-2]!=nums[right]) nums[left++]=nums[right];
        }
        return left;
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