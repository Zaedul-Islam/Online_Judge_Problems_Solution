// LeetCode 102. Binary Tree Level Order Traversal.cpp

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> ans;
        vector<TreeNode*> nodePtr;
        vector<int> nodeValue;
        queue<TreeNode*> Q;
        
        if(root == NULL)
            return ans;
        
        nodePtr.push_back(root);
        nodeValue.push_back(root->val);
        ans.push_back(nodeValue);
        
        Q.push(root);
        
        nodePtr.clear();
        nodeValue.clear();
        
        while(!Q.empty())
        {
            
            while(!Q.empty())
            {
                TreeNode *curr = Q.front();
                Q.pop();
                
                if(curr->left != NULL)
                {
                    nodePtr.push_back(curr->left);
                    nodeValue.push_back(curr->left->val);
                }
                
                if(curr->right != NULL)
                {
                    nodePtr.push_back(curr->right);
                    nodeValue.push_back(curr->right->val);
                }
                
            }
            
            for(int I = 0; I < nodePtr.size(); I++)
                Q.push(nodePtr[I]);
            
            if(nodeValue.size() != 0)
                ans.push_back(nodeValue);
            
            nodePtr.clear();
            nodeValue.clear();
            
        }
        
        return ans;
        
    }   
};