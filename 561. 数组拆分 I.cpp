#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int arrayPairSum(vector<int>& nums){
        int res=0;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i=i+2) res+=nums[i];
        return res;
    }
};

int main(){
    int n, res;
    scanf("%d", &n);
    vector<int> nums(2*n);
    for(int i=0;i<2*n;i++)  scanf("%d", &nums[i]);
    Solution s;
    res=s.arrayPairSum(nums);
    cout<<res<<endl;
    return 0;
}