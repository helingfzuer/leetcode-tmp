#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x): val(x), next(NULL) {}
};

ListNode *creatList(int  n){
    ListNode *head=NULL, *p, *q;
    while(n--){
        int tmp;
        scanf("%d", &tmp);
        q=new ListNode(tmp);
        head==NULL? head=q: p->next=q;
        p=q;
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
    ListNode* partition(ListNode* head, int x){
        ListNode *smallList=new ListNode(0), *bigList=new ListNode(0);
        ListNode *smallhead=smallList, *bigHead=bigList;
        while(head){
            head->val<x? (smallList->next=head, smallList=smallList->next): (bigList->next=head, bigList=bigList->next);
            head=head->next;
        }
        bigList->next=NULL, smallList->next=bigHead->next;
        return smallhead->next;
    }
};

int main(){
    int n, x;
    scanf("%d %d", &n, &x);
    ListNode *head=creatList(n);
    Solution s;
    ListNode *res=s.partition(head, x);
    printList(res);
    return 0;
}