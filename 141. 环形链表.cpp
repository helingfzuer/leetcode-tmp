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
    bool hasCycle(ListNode *head){
        ListNode *slowPoint=head, *fastPoint=head;
        while(fastPoint&&fastPoint->next){
            slowPoint=slowPoint->next, fastPoint=fastPoint->next->next;
            if(slowPoint==fastPoint)  return true;
        }
        return false;
    }
};

int main(){

    return 0;
}