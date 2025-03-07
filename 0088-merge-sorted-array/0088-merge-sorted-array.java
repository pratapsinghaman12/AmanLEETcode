class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int last = m + n - 1;
        int i = m - 1;
        int j = n - 1;

        while(i >= 0 && j >= 0){
            if( nums2[j] > nums1[i]){
                nums1[last] = nums2[j--];
            }else{
                nums1[last] = nums1[i--];
            }
            last--;
        }

        while( j>= 0){
            nums1[last--] = nums2[j--];
        }
    }
}