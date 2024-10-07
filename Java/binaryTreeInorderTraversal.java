class Solution {
    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer> ans = new ArrayList<>();
        TreeNode ptr = root;
        while(ptr!=null){
            if(ptr.left==null){
                ans.add(ptr.val);
                ptr = ptr.right;
            }
            else{
                TreeNode rightMost = ptr.left;
                while(rightMost.right!=null && rightMost.right!=ptr){
                    rightMost = rightMost.right;
                }
                if(rightMost.right==null){
                    rightMost.right = ptr;
                    ptr = ptr.left;
                }
                else{
                    ans.add(ptr.val);
                    rightMost.right = null;
                    ptr = ptr.right;
                }
            }
        }
        return ans;
    }
}