class Solution {
    public int subarraySum(int[] nums, int k) {
        int ans = 0;
        int sum = 0;
        Map<Integer, Integer>  map = new HashMap<>();
        map.put(0, 1);
        
        for(int x : nums){
           sum+=x;
           int rem = sum - k;
           if(map.containsKey(rem)){
              ans+=map.get(rem);
           }
           map.put(sum, map.getOrDefault(sum, 0) + 1);
        }
        return ans;  
    }
}