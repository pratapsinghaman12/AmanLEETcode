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
    public int pathSum(TreeNode root, int targetSum) {
        HashMap<Long, Integer> hash = new HashMap<>();
        hash.put(0L, 1);
        return helpMeGod(root, 0L, targetSum, hash);
    }

    public int helpMeGod(TreeNode root, long currSum, int targetSum, HashMap<Long, Integer> hash ){
        if(root == null){
            return 0;
        }

        currSum += root.val;

        int count = hash.getOrDefault(currSum - targetSum, 0);

        hash.put(currSum, hash.getOrDefault(currSum, 0) + 1);

        count += helpMeGod(root.left, currSum, targetSum, hash);
        count += helpMeGod(root.right, currSum, targetSum, hash);

        hash.put(currSum, hash.getOrDefault(currSum, 0) - 1);

        return count;
    }
}