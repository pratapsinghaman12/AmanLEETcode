
class Solution {
    private Map<String, Integer> map = new HashMap<>();
    private List<TreeNode> result = new ArrayList<>();

    public List<TreeNode> findDuplicateSubtrees(TreeNode root) {
        processTree(root);
        return result;
    }

    public String processTree(TreeNode root){
        if(root == null){
            return "#";
        }

        String serialize = root.val + "," + processTree(root.left) + "," + processTree(root.right);

        map.put(serialize, map.getOrDefault(serialize, 0) + 1);

        if(map.get(serialize) == 2){
            result.add(root);
        }

        return serialize;
    }
}