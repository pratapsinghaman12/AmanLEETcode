class Solution {
public:
     void reverse(vector<int>& arr,int low,int height)
    {
        while(low<height)
        {
            swap(arr[low],arr[height]);
            low++;
            height--;
        }
    }
    
    
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        if ((n == 0) || (k <= 0))
            {
                return;
            }
        reverse(nums,0,n-1);
        reverse(nums,k,n-1);
        reverse(nums,0,k-1);
    }
};