class Solution {
public:
    int solve(TreeNode* root,int &ans){
        if(root == NULL){
            return -1;
        }
        int l = solve(root->left,ans);
        int r = solve(root->right,ans);
        // cout<<l<<" "<<r<<" ";
        int k;
        if(l==-1){
            if(r==-1)k = 0;
            else if(r==0){
                ans++;
                k = 1;
            }else{
                k = -1;
            }
        }else if(l==0){
            ans++;
            k = 1;
        }else{
            if(r==-1)k = -1;
            else if(r==0){
                ans++;
                k = 1;
            }else{
                k = -1;
            }
        }
        // cout<<k<<endl;
        return k;
    }
    int minCameraCover(TreeNode* root) {
        // if(root->left==NULL&&root->right== NULL)return 1;
        int ans = 0;
        int x = solve(root,ans);
        // cout<<ans<<" "<<x;
        if(x==0)ans++;
        return ans ;
    }
};