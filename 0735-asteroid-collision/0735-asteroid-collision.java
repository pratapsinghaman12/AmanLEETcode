class Solution {
    public int[] asteroidCollision(int[] asteroids) {
        Stack<Integer> stack  = new Stack<>();

        for(int i = 0;i<asteroids.length;i++){
            boolean futa = false;
            while(!stack.isEmpty() && asteroids[i] < 0 && stack.peek() > 0){
                if(Math.abs(stack.peek()) < Math.abs(asteroids[i])){
                    stack.pop();
                }else if(Math.abs(stack.peek()) == Math.abs(asteroids[i])){
                    stack.pop();
                    futa = true;
                    break;
                }else{
                   futa = true;
                   break;
                }
            }
            if(futa == false){
                stack.push(asteroids[i]);
            }
        }
        
        int[] ans = new int[stack.size()];
        for(int i = stack.size() - 1; i>=0; i--){
            ans[i] = stack.pop();
        }
        return ans;
    }
}