class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int low=1;
        int high=arr.size()-1;
        
        if(arr.size()<=2)
        {
            return false;
        }
       
        while(low<arr.size()&&arr[low]>arr[low-1])
        {
            low++;
        }
        if(low==arr.size())
        {
            return false;
        }
        low=low-1;
        if(low==0)
        {
            return false;
        }
        
        while(high>=0&&arr[high]<arr[high-1])
        {
            high--;
        }
        
        return low==high;
    }
};