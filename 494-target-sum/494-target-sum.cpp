class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
          int S=abs(target);
        int sum = 0;
        int zeroCount = 0;
        int N=nums.size();
        for (int num : nums){
            sum += num;
            
            if (num == 0){
                zeroCount++;
            }
        }
        
        if (S > sum || (sum + S) % 2 != 0){
            return 0;
        }
        
        int targetSum = (sum + S)/2; 
        
        //count the number of subsets with targetSum
        int dp[N+1][targetSum+1];
        for (int i = 0; i < N+1; i++){
            for (int j=0; j < targetSum+1; j++){
                if (j == 0){
                    //meaning w = 0. Only way is include empty set {}
                    dp[i][j] = 1;
                }
                else if (i == 0){
                    //meaning no item. No way to add to w
                    dp[i][j] = 0;
                }
                else if (nums[i-1] > j || nums[i-1] == 0){
                    dp[i][j] = dp[i-1][j];
                }
                else {
                    dp[i][j] = dp[i-1][j] + dp[i-1][j - nums[i-1]];
                }
            }
        }
        
        return pow(2, zeroCount) * dp[N][targetSum] ;
    }
};