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
    ListNode* middleNode(ListNode* head){
        ListNode *slowPoint=head, *fastPoint=head;
        while(fastPoint&&fastPoint->next)  slowPoint=slowPoint->next, fastPoint=fastPoint->next->next;
        return slowPoint;
    }
};

int main(){
    int n;
    scanf("%d", &n);
    vector<int> nums(n);
    for(int i=0;i<n;i++)  scanf("%d", &nums[i]);
    ListNode *head=creatList(nums);
    Solution s;
    ListNode *res=s.middleNode(head);
    cout<<res->val<<endl;
    return 0;
}