class Solution {
    public int numberOfSubarrays(int[] nums, int k) {
        HashMap<Integer, Integer> hash = new HashMap<>();
        int sum = 0;
        hash.put(0,1);
        int count = 0;
        for(int i=0; i< nums.length;i++){
            if(nums[i]%2 == 0){
              nums[i] = 0;
            }else{
                nums[i] = 1;
            }
        }

        for(int num : nums){
            sum = sum + num;
            if(hash.containsKey(sum -k)){
              count += hash.get(sum-k);
            }
            hash.put(sum, hash.getOrDefault(sum,0)+1);
        }
         return count;
    }
}