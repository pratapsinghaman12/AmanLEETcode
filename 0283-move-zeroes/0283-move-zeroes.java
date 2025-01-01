class Solution {
    public void moveZeroes(int[] nums) {
        int left  = 0;
        int right = 0;
        while(right < nums.length){
            if(nums[right] != 0){
                int tem = nums[right];
                nums[right] = nums[left];
                nums[left] = tem;
                left++;
            }
            right++;
        }
    }
}