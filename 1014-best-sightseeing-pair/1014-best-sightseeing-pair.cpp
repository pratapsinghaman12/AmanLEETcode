class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        
        int n=values.size();
        
        int ans=INT_MIN;
        
        int i_max=values[0]+0;
        
        for(int j=1;j<n;j++)
        {
            ans=max(ans,i_max+ values[j]-j);
            i_max=max(i_max,values[j]+j);
        }
        return ans;
    }
};