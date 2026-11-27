/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void bfs(TreeNode* root, vector<vector<int>>& ans) {
        queue<TreeNode*> box;
        box.push(root);

        while (!box.empty()) {
            int n = box.size();
            vector<int> level;

            for (int i = 0; i < n; i++) {
                TreeNode* temp = box.front();
                box.pop();

                level.push_back(temp->val);

                if (temp->left != nullptr)
                    box.push(temp->left);
                if (temp->right != nullptr)
                    box.push(temp->right);
            }

            ans.push_back(level);
        }
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        if (root == nullptr)
            return ans;

        bfs(root, ans);
        return ans;
    }
};