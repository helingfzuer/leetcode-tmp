#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
    	vector<int> ans;
    	map<int, int> tmp_map; // key值为nums的值， value值为其下标 
		for(int i=0;i<nums.size();i++){
			if(tmp_map.count(nums[i])!=0){
				ans.push_back(tmp_map[nums[i]]),ans.push_back(i);
				break;
			}
			tmp_map[target-nums[i]]=i;
		}
		return ans;
    }
};

int main(){ 
    int n,sum;
    scanf("%d", &n);
    vector<int> nums(n);
    vector<int> ans;
    for(int i=0;i<nums.size();i++){
    	scanf("%d", &nums[i]);
    }
	scanf("%d", &sum);
	Solution s;
	ans=s.twoSum(nums, sum);
	cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}
