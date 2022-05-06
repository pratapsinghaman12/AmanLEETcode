class Solution {
public:
    void aman_dfs(vector<vector<int>>& mat,int i,int j,int x,int y)
    {
       if(i<0||i>=mat.size()||j<0||j>=mat[0].size()||mat[i][j]==x||mat[i][j]!=y)
       {
           return;
       }
        mat[i][j]=x;
        aman_dfs(mat,i,j-1,x,y);
        aman_dfs(mat,i,j+1,x,y);
        aman_dfs(mat,i-1,j,x,y);
        aman_dfs(mat,i+1,j,x,y);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int oldColor=image[sr][sc];
        aman_dfs(image,sr,sc,newColor,oldColor);
        return image;
    }
};