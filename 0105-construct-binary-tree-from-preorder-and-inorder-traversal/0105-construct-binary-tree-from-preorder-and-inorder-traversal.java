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
    private HashMap<Integer, Integer> inorderMap;
    private int preOrderIndex = 0;

    public TreeNode buildTree(int[] preorder, int[] inorder) {
        inorderMap = new HashMap<>();
        for(int i = 0 ;i<inorder.length; i++){
            inorderMap.put(inorder[i] , i);
        }

        return buildSubTree(preorder, 0, inorder.length - 1);
    }

    private TreeNode buildSubTree(int[] preorder, int inorderStart, int inorderEnd){
           if(inorderStart > inorderEnd){
            return null;
           }

           int val = preorder[preOrderIndex++];
           TreeNode root = new TreeNode(val);

           int index = inorderMap.get(val);

           root.left = buildSubTree(preorder, inorderStart, index - 1);
           root.right = buildSubTree(preorder, index + 1 , inorderEnd);

           return root;
    }
}