class Solution {
public:
    char findTheDifference(string s, string t) {
        int arr[26]={0};
        string n=s+t;
         char ans=' ';
        for(int i=0;i<n.size();i++)
        {
            if(arr[n[i]-97]==0)
            {
                arr[n[i]-97]++; 
            }
            else
            {
                arr[n[i]-97]--;
            }
           
            
        }
        
        for(int i=0;i<26;i++)
        {
            if(arr[i]==1)
            {
               ans= char(i+97);
                break;
            }
        }
      return ans;
        
    }
};