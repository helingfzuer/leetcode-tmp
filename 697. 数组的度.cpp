#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int findShortestSubArray(vector<int>& nums){
        unordered_map<int, int> mp, left, right;
        int n=nums.size(), degree=0, res=INT32_MAX;
        for(int i=0;i<n;i++){
            if(mp[nums[i]]==0)  left[nums[i]]=i;
            right[nums[i]]=i, mp[nums[i]]++;
            if(mp[nums[i]]>degree)  degree=mp[nums[i]];
        }
        for(auto iter=mp.begin();iter!=mp.end();iter++){
            if(iter->second==degree)  res=min(res, right[iter->first]-left[iter->first]+1);
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
    res=s.findShortestSubArray(nums);
    cout<<res<<endl;
    return 0;
}