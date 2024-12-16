class Solution {
    public int largestRectangleArea(int[] heights) {
             Stack<Integer> stack = new Stack<>();
        int maxArea = 0;
        int n = heights.length;
        
        // Iterate through the histogram
        for (int i = 0; i <= n; i++) {
            // Use 0 as a boundary for the last element
            int height = (i == n) ? 0 : heights[i];
            
            // If the current height is less than the top of the stack, calculate area
            while (!stack.isEmpty() && height < heights[stack.peek()]) {
                int h = heights[stack.pop()]; // Pop the top
                int width = stack.isEmpty() ? i : i - stack.peek() - 1; // Calculate the width
                maxArea = Math.max(maxArea, h * width); // Update max area
            }
            stack.push(i); // Push current index to the stack
        }
        
        return maxArea;
    }
}