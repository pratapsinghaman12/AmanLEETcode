class Solution {
    public int[] nextGreaterElements(int[] nums) {
        int n = nums.length;
        Stack<Integer> stack = new Stack<>();
        int[] result = new int[n];
        Arrays.fill(result,-1);

        for(int i = 0; i< n*2; i++){
            int currentIndex = i % n;
            while(!stack.isEmpty() && nums[stack.peek()] < nums[currentIndex]){
                 result[stack.pop()] = nums[currentIndex];
            }

            if(i<n){
              stack.push(currentIndex);
            }
        }

        return result;
    }
}