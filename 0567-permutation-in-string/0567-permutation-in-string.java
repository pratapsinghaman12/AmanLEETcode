class Solution {
    public boolean checkInclusion(String p, String s) {
        if(s == null || p == null || p.length() > s.length()) return false;
        int[] pCount = new int[26];
        int[] windowFrequency = new int[26];
        

        for(char x : p.toCharArray()){
            pCount[x - 'a']++;
        }

        int left  = 0;
        int right  = 0;
        int windowSize = p.length();

        while(right < s.length()){
            char currChar = s.charAt(right);
            windowFrequency[currChar - 'a']++;
            if(right - left + 1 == windowSize){
                if(Arrays.equals(windowFrequency, pCount)){
                    return true;
                }
                windowFrequency[s.charAt(left) - 'a']--;
                left++;
            }
            right++;
        }
        return false;
    }
}