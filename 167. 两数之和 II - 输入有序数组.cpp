#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> twoSum(vector<int>& numbers, int target){
        int left=0, right=numbers.size()-1;
        vector<int> res(2);
        while(left<right){
            if(numbers[left]+numbers[right]==target){
                res[0]=left+1, res[1]=right+1;
                return res;
            }
            numbers[left]+numbers[right]<target? left++: right--;
        }
        return res;
    }
};

int main(){
    int n, target;
    scanf("%d %d", &n, &target);
    vector<int> numbers(n), res;
    for(int i=0;i<n;i++)  scanf("%d", &numbers[i]);
    Solution s;
    res=s.twoSum(numbers, target);
    cout<<res[0]<<" "<<res[1]<<endl;
    return 0;
}