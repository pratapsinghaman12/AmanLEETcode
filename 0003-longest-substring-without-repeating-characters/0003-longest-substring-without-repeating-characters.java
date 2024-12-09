class Solution {
    public int lengthOfLongestSubstring(String s) {
        HashMap<Character, Integer> map = new HashMap<>();
        int ans = 0;
        int left = 0;

        for(int i = 0;i<s.length();i++){
            char x = s.charAt(i);
            if(map.containsKey(x)){
               int last = map.get(x);
               map.remove(x);
               if( left <= last){
                 left = last +1;
               }
            }

            map.put(x, i );
            ans = Math.max(ans, i - left + 1);
        }
        return ans;
    }
}