class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        unordered_map<string,multiset<string>>mp;
        for(int i=0;i<tickets.size();i++)
        {
            mp[tickets[i][0]].insert(tickets[i][1]);
        }
        vector<string>v;
        stack<string>st;
        st.push("JFK");
        while(st.empty()==false)
        {
            auto src= st.top();
            if(mp[src].size()==0)
            {
                v.push_back(src);
                st.pop();
            }
            else
            {
               auto a= mp[src].begin();
                st.push(*a);
                mp[src].erase(a);
            }
        }
        reverse(v.begin(),v.end());
        return v;
            
    }
};