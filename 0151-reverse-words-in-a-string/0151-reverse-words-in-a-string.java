class Solution {
    public String reverseWords(String s) {
         String[] arr = s.trim().split("\\s+");
    StringBuilder ans = new StringBuilder();
    
    // Reverse the words
    for (int i = arr.length - 1; i >= 0; i--) {
        ans.append(arr[i]);
        if (i != 0) { // Append space only if it's not the last word
            ans.append(" ");
        }
    }
    
    return ans.toString();
    }
}