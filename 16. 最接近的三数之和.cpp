#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int threeSumClosest(vector<int>& nums, int target){
        sort(nums.begin(), nums.end());
        int res=accumulate(nums.begin(), nums.begin()+3, 0), n=nums.size();
        for(int i=0;i<n-2;i++){
            if(i>0&&nums[i]==nums[i-1])  continue;
            int left=i+1, right=n-1;
            while(left<right){
                int sum=nums[i]+nums[left]+nums[right];
                if(sum==target)  return target;
                if(abs(sum-target)<abs(res-target))  res=sum;
                if(sum>target){
                    right--;
                    while(left<right&&nums[right]==nums[right+1])  right--;
                }
                else{
                    left++;
                    while(left<right&&nums[left]==nums[left-1])   left++;
                }
            }
        }
        return res;
    }
};

int main(){
    int n, target;
    scanf("%d %d", &n, &target);
    vector<int> nums(n);
    for(int i=0;i<n;i++)  scanf("%d", &nums[i]);
    Solution s;
    int res=s.threeSumClosest(nums, target);
    cout<<res<<endl;
    return 0;
}