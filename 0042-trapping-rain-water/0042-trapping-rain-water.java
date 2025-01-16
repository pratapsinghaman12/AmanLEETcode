class Solution {
    public int trap(int[] height) {
        int n = height.length;

        int[] pre_arr = new int[n];
        int[] post_arr = new int[n];

        pre_arr[0] = height[0];
        post_arr[n-1] = height[n-1];

        for(int i = 1; i< n;i++){
            pre_arr[i] = Math.max(height[i], pre_arr[i-1]);
        }

        for(int i = n-2; i>= 0;i--){
            post_arr[i] = Math.max(height[i], post_arr[i+1]);
        }
         
         int ans = 0;
        for(int i =1 ;i<n-1 ;i++){
            ans = ans +  Math.min(pre_arr[i], post_arr[i]) - height[i];
        }

        return ans;
    }
}