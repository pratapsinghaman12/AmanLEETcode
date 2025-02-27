class Solution {
    public int lengthOfLongestSubstring(String s) {
        int n = s.length();
        HashMap<Character, Integer> hash = new HashMap<>();
        int ans =0;
        int left = 0;

        for(int i = 0; i < n; i++){
          char x = s.charAt(i);
          if(hash.containsKey(x)){
            int last = hash.get(x);
            if(left<=last){
                left = last + 1;
            }
          }
          hash.put(x, i);
          ans = Math.max(ans, i - left + 1);
        }
        return ans;
    }
}