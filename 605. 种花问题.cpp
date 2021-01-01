#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n){
        int cnt=0;
        for(int i=0;i<flowerbed.size();i++){
            if(!flowerbed[i]&&(!i||!flowerbed[i-1])&&(i==flowerbed.size()-1||!flowerbed[i+1]))  cnt++, flowerbed[i]=1;
            if(cnt>=n)  return true;
        }
        return false;
    }
};

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    vector<int> flowered(n);
    for(int i=0;i<n;i++)  scanf("%d", &flowered[i]);
    Solution s;
    bool res=s.canPlaceFlowers(flowered, k);
    if(res)  cout<<"True"<<endl;
    else cout<<"False"<<endl;
    return 0;
}