class Solution {
    public long maximumSubarraySum(int[] nums, int k) {
        Set<Integer> my_set = new HashSet<>();
        int currSum = 0;
        int right = 0;
        int left = 0;
        int ans = 0;

        while(right < nums.length){
            currSum += nums[right];

             while(my_set.contains(nums[right])){
                 currSum -= nums[left];
                 my_set.remove(nums[left]);
                 left++;
             }

             my_set.add(nums[right]);

            if(right - left + 1 == k){
             ans = Math.max(ans,currSum);
             my_set.remove(nums[left]);
             currSum -= nums[left];
             left++;
            }
            right++;
        }
        return ans;
    }
}