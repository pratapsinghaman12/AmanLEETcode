class Solution {
public:
    int numRescueBoats(vector<int>& arr, int limit) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int ans=0;
        int i=0;
        int j=n-1;
        while(i<=j)
        {
            if(arr[j]+arr[i]<=limit)
            {
                j--;
                i++;
            }
            else
            {
                j--;
            }
            ans++;
        }
        return ans;
    }
};