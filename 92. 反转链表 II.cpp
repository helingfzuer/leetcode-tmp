#include<bits/stdc++.h>
using namespace std;

// 定义链表结构
struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(NULL) {}
};


// 构建链表
ListNode *creatList(vector<int> nums){
    ListNode *head=NULL, *curNode;
    for(int num: nums){
        ListNode *newNode=new ListNode(num);
        head==NULL? head=newNode: curNode->next=newNode;
        curNode=newNode;
    }
    return head;
}

// 打印链表
void printList(ListNode *head){
    while(head)  cout<<head->val<<" ", head=head->next;
    cout<<endl;
}

class Solution{
public:
    ListNode* reverseBetween(ListNode* head, int left, int right){
        if(!head||!head->next||left==right)  return head;
        ListNode *dummyNode=new ListNode(-1), *preNode;
        dummyNode->next=head, preNode=dummyNode;
        for(int i=1;i<left;i++)  preNode=preNode->next;
        ListNode *curNode=preNode->next;
        for(int i=left;i<right;i++){
            ListNode *netNode=curNode->next;
            curNode->next=netNode->next, netNode->next=preNode->next, preNode->next=netNode;
        }
        return dummyNode->next;
    }
};

int main(){
    int n, left, right;
    scanf("%d %d %d", &n, &left, &right);
    vector<int> nums(n);
    for(int i=0;i<n;i++)  scanf("%d", &nums[i]);
    ListNode *head=creatList(nums);
    Solution s;
    ListNode *res=s.reverseBetween(head, left, right);
    printList(res);
    return 0;
}
