class Solution {
public:
    string capitalizeTitle(string title) {
        int index=0;
        int counter=0;
        for(int i=0;i<title.size();i++)
        {
            if(title[i]==' ')
            {
                if(counter>2)
                {
                    title[index]=toupper(title[index]);
                    
                }
                counter=0;
                index=i+1;
            }
            else
            {
                 title[i]=tolower(title[i]);
                counter++;
            }
           
        }
        if(counter>2)
        {
            title[index]=toupper(title[index]);
        }
        
        return title;
    }
};