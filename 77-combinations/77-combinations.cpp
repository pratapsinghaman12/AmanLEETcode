class Solution {
public:
     vector<vector<int>>ans;
    void generate(vector<int>&res,int i,int n,int k)
    {
        if(i==n+1)
        {
            if(k==res.size())
            {
               ans.push_back(res); 
            }  
            return;
        }
        generate(res,i+1,n,k);
        res.push_back(i);
        generate(res,i+1,n,k);
        res.pop_back();
    }
    vector<vector<int>> combine(int n, int k) {
         vector<int>res;
        generate(res,1,n,k);
        return ans;
    }
};