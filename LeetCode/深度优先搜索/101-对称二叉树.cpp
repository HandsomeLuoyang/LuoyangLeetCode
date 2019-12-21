struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution
{
public:
    bool isSymmetric(TreeNode *root)
    {
        return isDuichen(root, root);
    }

    bool isDuichen(TreeNode *left, TreeNode *right)
    {
        if (!left && !right)
        {
            return true;
        }
        if (!left || !right)
        {
            return false;
        }
        if (left->val == right->val)
            return isDuichen(left->left, right->right) && isDuichen(left->right, right->left);
        return false;
    }
};