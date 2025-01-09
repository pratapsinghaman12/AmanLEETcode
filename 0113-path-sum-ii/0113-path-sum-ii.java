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
    public List<List<Integer>> pathSum(TreeNode root, int targetSum) {
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> list = new ArrayList<>();
        hasPathSum(root, targetSum, ans, list);
        return ans;
    }

    public  void hasPathSum( TreeNode root, int targetSum, List<List<Integer>> ans, List<Integer> list){
        if(root == null){
            return;
        }

        list.add(root.val);

        if(root.left == null && root.right ==null && root.val == targetSum){
             ans.add(new ArrayList<>(list));
        }else{
             hasPathSum(root.left, targetSum - root.val, ans, list );
             hasPathSum(root.right, targetSum - root.val, ans, list );
        }

        
        list.remove(list.size() -1 );
    }
}