#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x): val(x), left(NULL), right(NULL) {}
};

class Solution{
public:
    unordered_map<TreeNode*, int> selected, unselected;

    void dfs(TreeNode *node){
        if(!node) return;
        dfs(node->left), dfs(node->right);
        selected[node]=node->val+unselected[node->left]+unselected[node->right];
        unselected[node]=max(selected[node->left], unselected[node->left])+max(selected[node->right], unselected[node->right]);
    }

    int rob(TreeNode* root){
        dfs(root);
        return max(selected[root], unselected[root]);
    }
};

int main(){
    return 0;
}