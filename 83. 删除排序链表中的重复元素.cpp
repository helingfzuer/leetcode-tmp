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

class cmp{
public:
    bool operator()(ListNode* a, ListNode* b){return a->val>b->val;}
};

class Solution{
public:
    ListNode* deleteDuplicates(ListNode* head){
        ListNode *curNode=head;
        while(curNode&&curNode->next)  curNode->next->val==curNode->val? curNode->next=curNode->next->next: curNode=curNode->next;
        return head;
    }
};

int main(){
    int n;
    scanf("%d", &n);
    vector<int> nums(n);
    for(int i=0;i<n;i++)  scanf("%d", &nums[i]);
    ListNode *head=creatList(nums);
    Solution s;
    ListNode *res=s.deleteDuplicates(head);
    printList(res);
    return 0;
}
