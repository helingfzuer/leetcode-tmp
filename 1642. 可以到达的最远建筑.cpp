#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int n=heights.size();
        if(ladders>=n-1)  return n-1;
        priority_queue<int, vector<int>, greater<int> > minHeap;
        for(int i=1;i<n;i++){
            if(heights[i]<=heights[i-1])  continue;
            int diff=heights[i]-heights[i-1];
            minHeap.emplace(diff);
            if(minHeap.size()>ladders)  bricks-=minHeap.top(), minHeap.pop();
            if(bricks<0)  return i-1;
        }
        return n-1;
    }
};

int main(){
    int n, bricks, ladders;
    scanf("%d %d %d", &n, &bricks, &ladders);
    vector<int> heights(n);
    for(int i=0;i<n;i++)  scanf("%d", &heights[i]);
    Solution s;
    int res=s.furthestBuilding(heights, bricks, ladders);
    cout<<res<<endl;
    return 0;
}