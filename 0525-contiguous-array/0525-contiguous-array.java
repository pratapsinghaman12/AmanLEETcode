class Solution {
    public int findMaxLength(int[] nums) {
        int ans = 0;
        for(int i = 0; i<nums.length; i++){
            if(nums[i] == 0){
                nums[i] = -1;
            }
        }

        HashMap<Integer, Integer> map = new HashMap<>();
        map.put(0,-1);
        int sum = 0;
        for(int i = 0;i<nums.length;i++){
            sum += nums[i];
            if(map.containsKey(sum)){
              ans = Math.max(ans, i - map.get(sum));
            }else{
                map.put(sum,i);
            }
        }

        return ans;
    }
}