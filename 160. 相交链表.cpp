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

    int getLength(ListNode *head){
        int res=0;
        while(head)  res++, head=head->next;
        return res;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB){
        // 快慢双指针
        // if(!headA||!headB)  return NULL;
        // int lengthA=getLength(headA), lengthB=getLength(headB);
        // int dis=abs(lengthA-lengthB);
        // if(lengthA>lengthB){
        //     while(dis--)  headA=headA->next;
        // }
        // else{
        //     while(dis--)  headB=headB->next;
        // }
        // while(headA&&headB&&headA!=headB)  headA=headA->next, headB=headB->next;
        // return headA;

        // 拼接链表
        if(!headA||!headB)  return NULL;
        ListNode *ha=headA, *hb=headB;
        while(ha!=hb){
            ha=ha==NULL? headB: ha->next;
            hb=hb==NULL? headA: hb->next;
        }
        return ha;
    }
};

int main(){
    return 0;
}