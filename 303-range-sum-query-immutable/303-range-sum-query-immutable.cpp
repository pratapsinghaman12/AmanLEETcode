class NumArray {
public:
    vector<int> pre_sum;
    NumArray(vector<int>& nums) {
        int sum=0;
        for(auto x:nums)
        {
            sum+=x;
            pre_sum.push_back(sum);
        }
    }
    
    int sumRange(int left, int right) {
       if(left==0)
       {
           return pre_sum[right];
       }
        return pre_sum[right]-pre_sum[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */