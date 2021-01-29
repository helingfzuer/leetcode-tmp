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
    ListNode* removeNthFromEnd(ListNode* head, int n){
        ListNode *firstNode=head, *secondNode=head;
        while(n--)  secondNode=secondNode->next;
        if(!secondNode)  return head->next;
        while(secondNode->next)  firstNode=firstNode->next, secondNode=secondNode->next;
        firstNode->next=firstNode->next->next;
        return head;
    }
};

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    vector<int> nums(n);
    for(int i=0;i<n;i++)  scanf("%d", &nums[i]);
    ListNode *head=creatList(nums), *res;
    Solution s;
    res=s.removeNthFromEnd(head, k);
    printList(res);
    return 0;
}