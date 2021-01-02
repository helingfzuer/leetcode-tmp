#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target){
        if(matrix.empty())  return false;
        int m=matrix.size(), n=matrix[0].size();
        int i=0, j=n-1;
        while(i<m&&j>=0){
            if(matrix[i][j]==target)  return true;
            matrix[i][j]>target? j--: i++;
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