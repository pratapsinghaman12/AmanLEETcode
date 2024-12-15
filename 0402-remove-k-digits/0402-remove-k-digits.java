class Solution {
    public String removeKdigits(String num, int k) {
        int n = num.length();

        if(k>=n){
            return "0";
        }

        Stack<Integer> stack = new Stack<>();
        StringBuilder result = new StringBuilder();

        for(char x : num.toCharArray()){
            int digit = x - '0';
            
            while(!stack.isEmpty() && k > 0 && stack.peek() > digit){
                stack.pop();
                k--;
            }
            stack.push(digit);
        }

        while(!stack.isEmpty() && k > 0){
            stack.pop();
            k--;
        }

        for(int x : stack){
            char i = (char)(x + '0');
            result.append(i);
        }

        // result.reverse();

        while(result.length() > 0 && result.charAt(0) == '0'){
            result.deleteCharAt(0);
        }

        return result.length() == 0 ? "0" : result.toString();

    }
}