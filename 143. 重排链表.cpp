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

    ListNode *getMidNode(ListNode *head){
        if(!head||!head->next)  return head;
        ListNode *fastNode=head, *slowNode=head;
        while(fastNode->next&&fastNode->next->next)  fastNode=fastNode->next->next, slowNode=slowNode->next;
        return slowNode;
    }

    ListNode *reverseList(ListNode *head){
        ListNode *preNode=NULL, *curNode=head;
        while(curNode){
            ListNode *netNode=curNode->next;
            curNode->next=preNode, preNode=curNode, curNode=netNode;
        }
        return preNode;
    }

    void mergeLists(ListNode *list1, ListNode *list2){
        while(list1&&list2){
            ListNode *list1tmpNode=list1->next, *list2tmpNode=list2->next;
            list1->next=list2, list1=list1tmpNode, list2->next=list1, list2=list2tmpNode;
        }
    }

    void reorderList(ListNode* head){
        // 线性表
        // if(!head)  return;
        // vector<ListNode*> lists;
        // while(head)  lists.emplace_back(head), head=head->next;
        // int i=0, j=lists.size()-1;
        // while(i<j){
        //     lists[i]->next=lists[j], i++;
        //     if(i==j)  break;
        //     lists[j]->next=lists[i], j--;
        // }
        // lists[i]->next=NULL;

        // 从中间节点处分开
        if(!head)  return;
        ListNode *midNode=getMidNode(head);
        ListNode *list1=head, *list2=midNode->next;
        midNode->next=NULL, list2=reverseList(list2);
        mergeLists(list1, list2);
    }
};

int main(){
    int n;
    scanf("%d", &n);
    vector<int> nums(n);
    for(int i=0;i<n;i++)  scanf("%d", &nums[i]);
    ListNode *head=creatList(nums);
    cout<<"The list before reordering: "<<endl;
    printList(head);
    Solution s;
    s.reorderList(head);
    cout<<"The list after reordering: "<<endl;
    printList(head);
    return 0;
}