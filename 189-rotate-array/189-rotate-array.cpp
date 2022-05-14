class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        if ((n == 0) || (k <= 0))
            {
                return;
            }
        reverse(nums.begin(),nums.end());
        reverse(nums.begin()+k,nums.end());
        reverse(nums.begin(),nums.begin()+k);
        
    }
};