class Solution {
public:
    int depth(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        return max(depth(root->left),depth(root->right))+1;
    }
    
    void level(vector<vector<int>> &res,TreeNode*node,int h)
    {
        if(node==NULL)
            return;
        
        res[h].push_back(node->val);
        level(res,node->left,h-1);
        level(res,node->right,h-1);
    }
    
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        int h=depth(root);
        vector<vector<int>> res(h,vector<int> {});   //res[i][j]:序号，内容
        level(res,root,h-1);   //树深h，vector序列0-h-1
        return res;
    }
};
