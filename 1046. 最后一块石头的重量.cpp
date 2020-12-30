#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int lastStoneWeight(vector<int>& stones){
        priority_queue<int, vector<int> > maxHeap;
        for(int stone: stones)  maxHeap.push(stone);
        while(maxHeap.size()>1){
            int maxStone, secondMaxSecond;
            maxStone=maxHeap.top(), maxHeap.pop(), secondMaxSecond=maxHeap.top(), maxHeap.pop();
            if(maxStone!=secondMaxSecond)  maxHeap.push(maxStone-secondMaxSecond);
        }
        if(maxHeap.empty())  return 0;
        return maxHeap.top();
    }
};

int main(){
    int n, res;
    scanf("%d", &n);
    vector<int> stones(n);
    for(int i=0;i<n;i++)  scanf("%d", &stones[i]);
    Solution s;
    res=s.lastStoneWeight(stones);
    cout<<res<<endl;
    return 0;
}