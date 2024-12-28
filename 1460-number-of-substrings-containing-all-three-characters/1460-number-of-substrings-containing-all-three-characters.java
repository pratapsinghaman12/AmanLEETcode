class Solution {
    public int numberOfSubstrings(String s) {
        int n = s.length();
        int start = 0;
        int[] hash = new int[3];
        int count = 0;

        for(int end = 0;end <n;end++){
            hash[s.charAt(end) - 'a']++;

            while(hash[0] > 0 && hash[1] > 0 && hash[2] >0){
                count += (n - end);

                hash[s.charAt(start) - 'a']--;
                start++;
            }
        }
        return count;
    }
}