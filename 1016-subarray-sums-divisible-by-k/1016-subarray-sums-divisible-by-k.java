class Solution {
    public int subarraysDivByK(int[] nums, int k) {
        int ans = 0;
        int sum = 0;
        Map<Integer, Integer>  map = new HashMap<>();
        map.put(0, 1);
        
        for(int x : nums){
           sum+=x;
           int rem = (sum % k + k) % k;
           if(map.containsKey(rem)){
              ans+=map.get(rem);
           }
           map.put(rem, map.getOrDefault(rem, 0) + 1);
        }
        return ans;  
    }
}