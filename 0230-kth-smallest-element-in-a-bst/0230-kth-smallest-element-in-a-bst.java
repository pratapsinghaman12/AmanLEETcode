/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    private int count = 0;
    private int ans = -1;
    public int kthSmallest(TreeNode root, int k) {
        traverse(root,k);
        return ans;
    }

    public void traverse(TreeNode root, int k){
       if(root == null){
          return ;
       }

       traverse(root.left, k);
         count++;
         if(count == k){
             ans = root.val;
             return;
         }
       traverse(root.right, k);
    }
}