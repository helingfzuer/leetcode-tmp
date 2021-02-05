#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int maxScore(vector<int>& cardPoints, int k){
        int n=cardPoints.size();
        int totalSum=accumulate(cardPoints.begin(), cardPoints.begin()+n, 0), windowSize=n-k;
        int sum=accumulate(cardPoints.begin(), cardPoints.begin()+windowSize, 0);
        int minSum=sum;
        for(int i=windowSize;i<n;i++)  sum=sum-cardPoints[i-windowSize]+cardPoints[i], minSum=min(minSum, sum);
        return totalSum-minSum; 
    }
};

int main(){
    int n, k, res;
    scanf("%d %d", &n, &k);
    vector<int> cardPoint(n);
    for(int i=0;i<n;i++)  scanf("%d", &cardPoint[i]);
    Solution s;
    res=s.maxScore(cardPoint, k);
    cout<<res<<endl;
    return 0;
}