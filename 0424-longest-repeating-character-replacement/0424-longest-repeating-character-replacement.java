class Solution {
    public int characterReplacement(String s, int k) {
        int n = s.length();
        int[] freq = new int[26];
        int maxF = 0;
        int left = 0;
        int ans = 0;

        for(int i = 0;i<n;i++){
            freq[s.charAt(i) - 'A']++;
            maxF = Math.max(maxF, freq[s.charAt(i)-'A']);

            while((i - left + 1) - maxF > k ){
                freq[s.charAt(left) - 'A']--;
                left++;
            }

           ans = Math.max(ans, i - left + 1);
        }
        return ans;
    }
}