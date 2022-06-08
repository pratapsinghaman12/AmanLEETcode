class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int low=0;
        int high=n-1;
        int area=0;
        while(low<high)
        {
            area=max(area,min(height[low],height[high])*(high-low));
            if(height[low]<=height[high])
            {
                low++;
            }
            else
            {
                high--;
            }
        }
        return area;
    }
};