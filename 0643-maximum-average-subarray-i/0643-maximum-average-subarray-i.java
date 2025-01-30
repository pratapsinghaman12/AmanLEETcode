class Solution {
    public double findMaxAverage(int[] nums, int k) {
        int i = 0;
        int j = k - 1;
        int sum = 0;
        double ans = 0;
        while(i  < k){
            sum+=nums[i++];
        }
         ans = (double)sum/k;
        while(i < nums.length){
           sum+=nums[i];
           sum-=nums[i-k];
           i++;
           ans = Math.max(ans, (double)sum/k);
        }

        return ans;
    }
}