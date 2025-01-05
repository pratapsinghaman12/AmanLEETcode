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
    public List<String> binaryTreePaths(TreeNode root) {
        List<String> ans = new ArrayList<>();
        if(root != null){
             findPaths(ans, "", root);
        }
        return ans;
    }

    public void findPaths(List<String> ans, String path, TreeNode node){
        if(node.left == null && node.right == null){
            ans.add(path + node.val);
        }else{
            if(node.left != null){
                findPaths(ans, path + node.val + "->", node.left);
            }

            if(node.right != null){
                findPaths(ans, path + node.val + "->", node.right);
            }
        }
    }
}