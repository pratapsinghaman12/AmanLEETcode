class Solution {
    public int subarraysWithKDistinct(int[] nums, int k) {
        return atMostsubarray(nums, k) - atMostsubarray(nums,k-1);
    }

    public int atMostsubarray(int[] nums, int k){
         int start  = 0;
         int count = 0;
         HashMap<Integer, Integer> hash = new HashMap<>();

         for(int right = 0; right<nums.length; right++){
             hash.put(nums[right], hash.getOrDefault(nums[right], 0) + 1);
             
              while(hash.size() > k){
                hash.put(nums[start], hash.get(nums[start]) - 1);
                if(hash.get(nums[start]) == 0){
                    hash.remove(nums[start]);
                }
                start++;
              }
              count += right - start + 1;
         }
         return count;
    }
}