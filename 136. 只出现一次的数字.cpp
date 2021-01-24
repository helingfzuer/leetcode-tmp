#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int singleNumber(vector<int>& nums){
        int res=0;
        for(int tmp: nums)  res^=tmp;
        return res;
    }
};

int main(){
    int n, res;
    scanf("%d", &n);
    vector<int> nums(n);
    for(int i=0;i<n;i++)  scanf("%d", &nums[i]);
    Solution s;
    res=s.singleNumber(nums);
    cout<<res<<endl;
    return 0;
}
