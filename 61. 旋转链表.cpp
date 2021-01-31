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

    ListNode* rotateRight(ListNode* head, int k){
        if(!head)  return head;
        k=k%getLength(head);
        if(!k)  return head;
        ListNode *slowNode=head, *fastNode=head, *res;
        while(k--)  fastNode=fastNode->next;
        while(fastNode->next)  slowNode=slowNode->next, fastNode=fastNode->next;
        res=slowNode->next, slowNode->next=NULL, fastNode->next=head;
        return res;
    }
};

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    vector<int> nums(n);
    for(int i=0;i<n;i++)  scanf("%d", &nums[i]);
    ListNode *head=creatList(nums), *res;
    Solution s;
    res=s.rotateRight(head, k);
    printList(res);
    return 0;
}