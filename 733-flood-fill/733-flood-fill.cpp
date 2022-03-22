class Solution {
public:
    void dfs(vector<vector<int>>&image,int i,int j,int ne,int n,int m,int src)
    {
        image[i][j]=ne;
        if(i>0&& image[i-1][j]==src)
        {
            dfs(image,i-1,j,ne,n,m,src);
        }
        if(j>0&& image[i][j-1]==src)
        {
            dfs(image,i,j-1,ne,n,m,src);
        }
        if(i<n-1&&image[i+1][j]==src)
        {
            dfs(image,i+1,j,ne,n,m,src);
        }
        if(j<m-1&& image[i][j+1]==src)
        {
            dfs(image,i,j+1,ne,n,m,src);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int i, int j, int newColor) {
        int n=image.size();
        int m=image[0].size();
        int src=image[i][j];
        if(src==newColor)
        {
            return image;
        }
        dfs(image,i,j,newColor,n,m,src);
        return image;
    }
};