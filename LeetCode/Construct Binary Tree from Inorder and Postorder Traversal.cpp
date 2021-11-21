class Solution {
public:
   TreeNode* Tree(vector<int>& inorder, vector<int>& postorder, int ins,int ine,int posts,int poste){
        if(ins>ine) return NULL;
        int rootpos = postorder[poste];
        TreeNode* root = new TreeNode(rootpos);
        int rootindex = ins;
        for(;rootindex<=ine;rootindex++){
            if(inorder[rootindex]==rootpos) break;
        }
        int lefttreesize = rootindex - ins;
        int righttreesize =ine - rootindex;
        root->left = Tree(inorder, postorder, ins, rootindex-1, posts, posts + lefttreesize -1);
        root->right = Tree(inorder, postorder, rootindex+1, ine, poste - righttreesize, poste-1);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int len = inorder.size();
        return Tree(inorder,postorder, 0,len-1,0, len-1);
    }
};
