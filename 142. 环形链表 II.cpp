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
    ListNode *detectCycle(ListNode *head){
        if(!head||!head->next)  return NULL;
        ListNode *slowPoint=head, *fastPoint=head;
        while(fastPoint&&fastPoint->next){
            fastPoint=fastPoint->next->next, slowPoint=slowPoint->next;
            if(fastPoint==slowPoint)  break;
        }
        if(!fastPoint||!fastPoint->next)  return NULL;
        slowPoint=head;
        while(slowPoint!=fastPoint)  fastPoint=fastPoint->next, slowPoint=slowPoint->next;
        return fastPoint;
    }
};

int main(){
    return 0;
}