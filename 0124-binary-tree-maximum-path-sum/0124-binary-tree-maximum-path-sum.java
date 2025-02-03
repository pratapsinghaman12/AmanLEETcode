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
    private int ans = Integer.MIN_VALUE;
    public int maxPathSum(TreeNode root) {
        maxGain(root);
        return ans;
    }

    public int maxGain(TreeNode root){
         if(root == null){
            return 0;
         }

         int leftSum = Math.max(maxGain(root.left),0);
         int rightSum = Math.max(maxGain(root.right),0);

         int total = leftSum + rightSum + root.val;
         ans =  Math.max(total, ans);

         return root.val + Math.max(leftSum, rightSum);
    }
}