#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x): val(x), next(NULL) {}
};

ListNode *creatList(vector<int> &nums){
    ListNode *head=NULL, *curNode;
    for(int num: nums){
        ListNode *newNode=new ListNode(num);
        head==NULL? head=newNode: curNode->next=newNode;
        curNode=newNode;
    }
    return head;
}

class Solution{
public:
    ListNode* getKthFromEnd(ListNode* head, int k){
        ListNode *firstNode=head, *secondNode=head;
        while(k--)  secondNode=secondNode->next;
        while(secondNode)  firstNode=firstNode->next, secondNode=secondNode->next;
        return firstNode;
    }
};

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    vector<int> nums(n);
    for(int i=0;i<n;i++)  scanf("%d", &nums[i]);
    ListNode *head=creatList(nums), *res;
    Solution s;
    res=s.getKthFromEnd(head, k);
    cout<<res->val<<endl;
    return 0;
}