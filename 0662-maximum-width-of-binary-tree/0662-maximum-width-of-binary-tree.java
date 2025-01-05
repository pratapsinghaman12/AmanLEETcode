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
    public int widthOfBinaryTree(TreeNode root) {
        if(root  == null){
            return 0;
        }

        int ans = 0;

        Queue<Pair> queue = new LinkedList<>();
        queue.offer(new Pair(root, 0));

        while(!queue.isEmpty()){
            int size = queue.size();
            int curr_min = queue.peek().index;
            int first = 0;
            int last = 0;

            for(int i = 0; i<size; i++){
              Pair curr = queue.poll();
              int currIndex = curr.index - curr_min;
              TreeNode currNode = curr.node;

              if(i == 0 ){
                first = currIndex;
              }

              if(i == size - 1){
                last = currIndex;
              }

              if(currNode.left != null){
                  queue.offer(new Pair(currNode.left, 2*currIndex));
              }

              if(currNode.right != null){
                  queue.offer(new Pair(currNode.right, 2*currIndex + 1));
              }
              
            }
            ans = Math.max(ans, last - first + 1);
        }
        return ans;
    }
}

class Pair {
    TreeNode node;
    int index;

    Pair(TreeNode node, int index) {
        this.node = node;
        this.index = index;
    }
}