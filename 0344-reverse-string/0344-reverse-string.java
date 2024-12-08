class Solution {
    public void reverseString(char[] s) {
        int l = s.length;
        int left = 0;
        int right = l-1;
        while(left<=right){
            char temp = s[right];
            s[right] = s[left];
            s[left] = temp;
            left++;
            right--;
        }
        
    }
}