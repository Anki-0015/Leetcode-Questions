class Solution {
public:
    bool check(TreeNode* curr,ListNode* head){
        
        if(curr->val!=head->val)return false;
        if(head->next==NULL)return true;
        bool ans=false;
        if(curr->left)ans|=check(curr->left,head->next);
        if(curr->right)ans|=check(curr->right,head->next);
        return ans;
    }
    bool dfs(TreeNode* curr,ListNode* head){
        bool ans=false;
        if(check(curr,head))return true;      
        if(curr->left)ans|=dfs(curr->left,head);
        if(curr->right)ans|=dfs(curr->right,head);
        return ans;
    }
    bool isSubPath(ListNode* head, TreeNode* root) {
        return dfs(root,head);
    }
};
