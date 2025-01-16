class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        int n = nums.length;
        List<List<Integer>> ans = new ArrayList<>();
        if (nums == null || nums.length < 3) return ans;

        Arrays.sort(nums);
        for(int i = 0;i < n; i++){
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            int j = i + 1;
            int k = n - 1;

            while(j < k){
                if(nums[i] + nums[j] + nums[k] > 0){
                    k--;
                }else if(nums[i] + nums[j] + nums[k] < 0){
                    j++;
                }else{
                  List<Integer> list = Arrays.asList(nums[i], nums[j], nums[k]);
                  ans.add(list);

                  j++;
                  k--;

                  while (j < k && nums[j] == nums[j - 1]) j++;
                  while (j < k && nums[k] == nums[k + 1]) k--;
                }
            }
        }
        return ans;
    }
}