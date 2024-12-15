class Solution {
    public int removeElement(int[] nums, int val) {
        int i = 0;

        for(int j = 0;j<nums.length;j++){
           if(nums[j]!=val){
            swap(nums,i,j);
            i++;
           }
        }
        return i;
    }

    public void swap(int[] nums, int i, int j){
           int temp = nums[j];
           nums[j] = nums[i];
           nums[i] = temp;
           return;
    }
}