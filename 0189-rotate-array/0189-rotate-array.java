class Solution {
    public void rotate(int[] nums, int k) {
        int n = nums.length;
        k = k % n;
        int window = n - k - 1;
        reverseArray(nums, 0, window);
        reverseArray(nums, window +  1, n -1);
        reverseArray(nums,0,n -1);
    }

    public void reverseArray(int[] nums, int start, int end){
          while(start < end){
            int tem = nums[start];
            nums[start] = nums[end];
            nums[end] = tem;
            start++;
            end--;
          }
    }
}