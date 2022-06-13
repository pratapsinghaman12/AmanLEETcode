class Solution {
public:
   void aman(string digits,vector<string>&ans,int i,string mapping[],string output,int n)
   {
       if(i>=n)
       {
           ans.push_back(output);
           return;
       }
       int number= digits[i]-'0';
       string value=mapping[number];
       for(int j=0;j<value.size();j++)
       {
           output.push_back(value[j]);
           aman(digits,ans,i+1,mapping,output,n);
           output.pop_back();
       }
   }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        int n=digits.size();
        if(n==0)
        {
            return ans;
        }
        int i=0;
        string output="";
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        aman(digits,ans,i,mapping,output,n);
        return ans;
    }
};