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
    public int maxAncestorDiff(TreeNode root) {
        return dfs(root, root.val, root.val);
    }

    public int dfs(TreeNode root, int currMax, int currMin){
        if(root == null){
            return currMax - currMin;
        }

        currMax = Math.max(root.val, currMax);
        currMin = Math.min(root.val, currMin);

        int leftDeff  = dfs(root.left, currMax, currMin);
        int rightDeff = dfs(root.right, currMax, currMin);

        return Math.max(leftDeff, rightDeff);
    }
}