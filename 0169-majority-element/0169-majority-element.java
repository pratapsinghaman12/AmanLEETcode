class Solution {
    public int majorityElement(int[] nums) {
        int count = 1;
        int currM = nums[0];
        for(int i = 1; i<nums.length;i++){
           if(currM == nums[i]){
            count++;
           }else{
            count--;
           }

           if(count == 0){
            currM = nums[i];
            count++;
           }
        }
        return currM;
    }
}