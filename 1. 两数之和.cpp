#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target){
        // ±©Á¦Ë«Ñ­»·
        // vector<int> res(2);
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j]==target){
        //             res[0]=i, res[1]=j;
        //             break;
        //         }
        //     }
        // }
        // return res;

        // ¹þÏ£±í
        vector<int> res(2);
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++){
            auto iter=mp.find(target-nums[i]);
            if(iter!=mp.end()){
                res[0]=iter->second, res[1]=i;
                break;
            }
            mp[nums[i]]=i;
        }
        return res;
    }
};

int main(){
    int n, target;
    scanf("%d %d", &n, &target);
    vector<int> nums(n), res;
    for(int i=0;i<n;i++)  scanf("%d", &nums[i]);
    Solution s;
    res=s.twoSum(nums, target);
    cout<<res[0]<<" "<<res[1]<<endl;
    return 0;
}