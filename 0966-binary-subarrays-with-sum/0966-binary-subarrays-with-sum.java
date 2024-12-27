class Solution {
    public int numSubarraysWithSum(int[] nums, int goal) {
        HashMap<Integer, Integer> hash = new HashMap<>();
        int sum = 0;
        int count = 0;
        hash.put(0,1);
        for(int i = 0;i < nums.length; i++){
           sum = sum + nums[i];

           if(hash.containsKey(sum - goal)){
             count  += hash.get(sum-goal);
           }
           hash.put(sum, hash.getOrDefault(sum,0)+1);
        }
        return count;
    }
}