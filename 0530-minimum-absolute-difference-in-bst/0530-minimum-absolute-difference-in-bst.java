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
    private int minValue = Integer.MAX_VALUE;
    private Integer prev = null;

    public int getMinimumDifference(TreeNode root) {
        traverse(root);
        return minValue;
    }

    public void traverse(TreeNode root){
        if(root == null){
            return ;
        }

        traverse(root.left);
        if(prev != null){
        minValue = Math.min(minValue, root.val - prev);
        }
        prev = root.val;
        traverse(root.right);
    }
}