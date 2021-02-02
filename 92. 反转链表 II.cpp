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

void printList(ListNode *head){
    while(head){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}

class Solution{
public:
    ListNode* reverseBetween(ListNode* head, int m, int n){
        ListNode *dummyNode=new ListNode(-1);
        dummyNode->next=head;
        ListNode *preNode=dummyNode;
        for(int i=1;i<m;i++)  preNode=preNode->next;
        ListNode *curNode=preNode->next;
        for(int i=m;i<n;i++){
            ListNode *netNode=curNode->next;
            curNode->next=netNode->next, netNode->next=preNode->next, preNode->next=netNode;
        }
        return dummyNode->next;
    }
};

int main(){
    int k, m, n;
    scanf("%d %d %d", &k, &m, &n);
    vector<int> nums(k);
    for(int i=0;i<k;i++)  scanf("%d", &nums[i]);
    ListNode *head=creatList(nums), *res;
    printList(head);
    Solution s;
    res=s.reverseBetween(head, m, n);
    printList(res);
    return 0;
}