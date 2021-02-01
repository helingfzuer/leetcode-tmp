#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B){
        int sumA=accumulate(A.begin(), A.end(), 0), sumB=accumulate(B.begin(), B.end(), 0);
        unordered_map<int, bool> mp;
        for(int num: B)  mp[num]=true;
        vector<int> res(2);
        for(int num: A){
            int tmp=(sumB-sumA+2*num)/2;
            if(mp[tmp]){
                res[0]=num, res[1]=tmp;
                return res;
            }
        }
        return res;
    }
};

int main(){
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    vector<int> A(n1), B(n2), res(2);
    for(int i=0;i<n1;i++)  scanf("%d", &A[i]);
    for(int i=0;i<n2;i++)  scanf("%d", &B[i]);
    Solution s;
    res=s.fairCandySwap(A, B);
    cout<<res[0]<<" "<<res[1]<<endl;
    return 0;
}