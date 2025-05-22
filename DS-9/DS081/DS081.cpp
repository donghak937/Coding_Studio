#include <iostream>
#include <queue>
using namespace std;
 
class TreeNode {
public:    
    int val;
    TreeNode *left, *right;
    TreeNode(int x){
        val = x;
        left = right = NULL;
    }
};
 
TreeNode* buildTree(int *nums, int size) {
    if (nums == NULL) return NULL;
    
    TreeNode* root = new TreeNode(nums[0]);
    queue<TreeNode*> q;
    q.push(root);
    int i = 1;
    while (i < size) {
        TreeNode* curr = q.front();
        q.pop();
        if (i < size) {
            curr->left = new TreeNode(nums[i++]);
            q.push(curr->left);
        }
        if (i < size) {          
            curr->right = new TreeNode(nums[i++]);
            q.push(curr->right);
        }
    }
    return root;
}
 
void printInOrderTree(TreeNode* root) {
    if (!root) return;
    printInOrderTree(root->left);
    if (root->val != 0){
        cout << root->val << " ";
    }
    printInOrderTree(root->right);
}
 
int main() {
    int input;
    cin >> input;
    int* a = new int[input];
    for(int i = 0 ; i < input; i++){
        cin >> a[i];
    }

    TreeNode* root = buildTree(a,input);
    printInOrderTree(root);
    return 0;
}