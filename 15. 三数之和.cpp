#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<vector<int>> threeSum(vector<int>& nums){
        vector<vector<int> > res;
        if(nums.size()<3)  return res;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(i>0&&nums[i]==nums[i-1])  continue;
            int left=i+1, right=nums.size()-1;
            while(left<right){
                if(nums[left]+nums[right]+nums[i]==0){
                    res.push_back({nums[i], nums[left], nums[right]});
                    while(left<right&&nums[left+1]==nums[left])  left++;
                    while(left<right&&nums[right-1]==nums[right])  right--;
                    left++, right--;
                }
                else nums[left]+nums[right]+nums[i]>0? right--: left++;
            }
        }
        return res;
    }
};

int main(){
    int n;
    scanf("%d", &n);
    vector<int> nums(n);
    for(int i=0;i<n;i++)  scanf("%d", &nums[i]);
    Solution s;
    vector<vector<int> > res=s.threeSum(nums);
    for(int i=0;i<res.size();i++)  cout<<res[i][0]<<" "<<res[i][1]<<" "<<res[i][2]<<endl;
    return 0;
}