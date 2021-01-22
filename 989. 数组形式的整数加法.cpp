#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> addToArrayForm(vector<int>& A, int K){
        // 逐位相加
        // vector<int> res;
        // int i=A.size()-1, tmp=0;
        // while(i>=0&&K){
        //     int total=A[i--]+K%10+tmp;
        //     res.emplace_back(total%10), tmp=total/10, K/=10;
        // }
        // while(i>=0){
        //     int total=A[i--]+tmp;
        //     res.emplace_back(total%10), tmp=total/10;
        // }
        // while(K){
        //     int total=K%10+tmp;
        //     res.emplace_back(total%10), tmp=total/10, K/=10;
        // }
        // if(tmp)  res.emplace_back(tmp);
        // reverse(res.begin(), res.end());
        // return res;

        // 把K加到最低位
        vector<int> res;
        int i=A.size()-1, tmp=0;
        A[i]+=K;
        while(i>=0){
            int total=A[i]+tmp;
            A[i--]=total%10, tmp=total/10;
        }
        while(tmp)  A.insert(A.begin(), tmp%10), tmp/=10;
        return A;
    }
};

int main(){
    int n, K;
    scanf("%d %d", &n, &K);
    vector<int> A(n), res;
    for(int i=0;i<n;i++)  scanf("%d", &A[i]);
    Solution s;
    res=s.addToArrayForm(A, K);
    for(int tmp: res)  cout<<tmp<<" ";
    cout<<endl;
    return 0;
}