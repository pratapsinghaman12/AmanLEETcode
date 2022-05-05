class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>hash1(26,0);
        vector<int>hash2(26,0);
        
        int l1=s1.size();
        int l2=s2.size();
        
        if(l2<l1)
        {
            return false;
        }
        
        for(int i=0;i<l1;i++)
        {
            hash1[s1[i]-'a']++;
            hash2[s2[i]-'a']++;
        }
        int low=0;
        int high=l1-1;
        
        while(high<l2)
        {
            if(hash1==hash2)
            {
                return true;
            }
            high++;
            if(high!=l2)
            {
                hash2[s2[high]-'a']++;
            }
            hash2[s2[low]-'a']--;
            low++;
        }
        
        return false;
    }
};