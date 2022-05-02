class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int x) {
        int n=arr.size();
        int i=0;;
        int j=n-1;
        vector<int>ans;
        while(i<j)
        {
            if(arr[i]+arr[j]==x)
            {
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
            }
            else if(arr[i]+arr[j]>x)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return ans;
    }
};