class Solution {
    public int sumSubarrayMins(int[] arr) {
        int MOD = 1_000_000_007;
        int n = arr.length;

        Stack<Integer> stack = new Stack<>();
        int[] prevSmaller = new int[n];
        int[] nextSmaller = new int[n];

        // Initialize prevSmaller and nextSmaller
        Arrays.fill(prevSmaller, -1);
        Arrays.fill(nextSmaller, n);

        // Calculate prevSmaller
        for (int i = 0; i < n; i++) {
            while (!stack.isEmpty() && arr[i] < arr[stack.peek()]) {
                stack.pop();
            }
            prevSmaller[i] = stack.isEmpty() ? -1 : stack.peek();
            stack.push(i);
        }

        stack.clear();

        // Calculate nextSmaller
        for (int i = n - 1; i >= 0; i--) {
            while (!stack.isEmpty() && arr[i] <= arr[stack.peek()]) {
                stack.pop();
            }
            nextSmaller[i] = stack.isEmpty() ? n : stack.peek();
            stack.push(i);
        }

        // Calculate the sum of subarray minimums
        long sum = 0;
        for (int i = 0; i < n; i++) {
            int prevCount = prevSmaller[i] == -1 ? i + 1 : i - prevSmaller[i];
            int nextCount = nextSmaller[i] == n ? n - i : nextSmaller[i] - i;

            sum = (sum + (long) arr[i] * prevCount * nextCount) % MOD;
        }

        return (int) sum;
    }
}