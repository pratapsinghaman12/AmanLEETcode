class Solution {
    public int characterReplacement(String s, int k) {
        int start = 0;
        int result = 0;
        int maxF = 0;
        int[] freq = new int[26];
        for(int end = 0;end<s.length();end++){

             freq[s.charAt(end)-'A']++;
             maxF = Math.max(maxF, freq[s.charAt(end)-'A']);

             while(( end - start + 1) - maxF > k){
                freq[s.charAt(start)-'A']--;
                start++;
             }
             
             result = Math.max(result, end-start+1);

        }
        return result;
    }
}