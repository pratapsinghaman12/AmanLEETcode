class Solution {
public:
    bool detectCapitalUse(string word) {
        int c=0;
        int s=0;
        for(auto x:word)
        {
            if(isupper(x))
            {
                c++;
            }
            else
            {
                s++;
            }
        }
        
        if(c==word.size())
        {
            return true;
        }
        else if(s==word.size())
        {
            return true;
        }
        else if(isupper(word[0])&&s==word.size()-1)
        {
            return true;
        }
        
        return false;
    }
};