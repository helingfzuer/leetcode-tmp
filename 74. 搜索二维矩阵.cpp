#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target){
        if(matrix.empty())  return false;
        int m=matrix.size(), n=matrix[0].size();
        int left=0, right=m*n-1;
        while(left<=right){
            int mid=(left+right)/2;
            int row=mid/n, col=mid%n;
            if(matrix[row][col]==target)  return true;
            matrix[row][col]>target? right=mid-1: left=mid+1;
        }
        return false;
    }
};

int main(){
    int m, n, target;
    scanf("%d %d %d", &m, &n, &target);
    vector<vector<int> > matrix(m, vector<int> (n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)  scanf("%d", &matrix[i][j]);
    }
    Solution s;
    bool res=s.searchMatrix(matrix, target);
    if(res)  cout<<"true"<<endl;
    else cout<<"false"<<endl;
    return 0;
}