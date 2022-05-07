class Solution {
public:
    int ans=0;
    int count=0;
     void mark_island(vector<vector<int>>& grid,int x,int y,int r,int c)
    {
        if(x<0||x>=r||y<0||y>=c||grid[x][y]!=1)
        {
            return;
        }
         count++;
         ans=max(ans,count);
        grid[x][y]=2;
        mark_island(grid,x+1,y,r,c);
        mark_island(grid,x-1,y,r,c);
        mark_island(grid,x,y+1,r,c);
        mark_island(grid,x,y-1,r,c);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int r= grid.size();
        int c= grid[0].size();
        if(r==0)
        {
            return 0;
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==1)
                {
                    count=0;
                    mark_island(grid,i,j,r,c);
                }
            }
        }
        return ans;
    }
};