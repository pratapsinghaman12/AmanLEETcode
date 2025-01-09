class Solution {
    public String longestCommonPrefix(String[] strs) {
        String ans = strs[0];
        for(String x : strs){
            if(x.length() < ans.length()){
                ans = x;
            }
        }

        int left = 0;
        while(left < strs.length){
            if(!strs[left].startsWith(ans)){
                ans = ans.substring(0, ans.length() - 1);
            }else{
               left++;
            }
        }
        return ans;
    }
}