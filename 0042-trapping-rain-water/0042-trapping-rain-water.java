class Solution {
    public int trap(int[] height) {
        int n = height.length;
        int[] pre_max = new int[n];
        int[] post_max = new int[n];
        int result = 0;

        pre_max[0] = height[0];
        post_max[n-1] = height[n-1];

        for(int i = 1;i<n;i++){
            pre_max[i] = Math.max(height[i], pre_max[i-1]);
        }

        for(int j = n-2;j>=0;j--){
            post_max[j] = Math.max(height[j], post_max[j+1]);
        }

        for(int i = 1;i<n-1;i++){
          result = result + (Math.min(pre_max[i],post_max[i]) - height[i]);
        }

        return result;
    }
}