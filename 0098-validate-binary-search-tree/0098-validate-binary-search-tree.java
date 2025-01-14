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
    private Integer prev = null;
    public boolean isValidBST(TreeNode root) {
        return inOrderValidate(root);
    }

    private boolean inOrderValidate(TreeNode node) {
        if (node == null) {
            return true;
        }

        if (!inOrderValidate(node.left)) {
            return false;
        }

        if (prev != null && node.val <= prev) {
            return false;
        }

        prev = node.val;

        return inOrderValidate(node.right);
    }
}