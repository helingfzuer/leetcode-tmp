#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> singleNumber(vector<int>& nums){
        vector<int> res(2);
        int bit;
        for(bit=0;bit<32;bit++){
            int cnt=0;
            for(int tmp: nums)  cnt+=(tmp>>bit)&1;
            if(cnt&1)  break;
        }
        for(int tmp: nums)   (tmp>>bit)&1? res[0]^=tmp: res[1]^=tmp;
        return res;
    }
};

int main(){
    int n;
    scanf("%d", &n);
    vector<int> nums(n), res;
    for(int i=0;i<n;i++)  scanf("%d", &nums[i]);
    Solution s;
    res=s.singleNumber(nums);
    cout<<res[0]<<" "<<res[1]<<endl;
    return 0;
}