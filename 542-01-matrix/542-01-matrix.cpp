class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        queue<pair<int,int>>ans;
        for(int i=0;i<mat.size();i++){
         for(int j=0;j<mat[0].size();j++){
             if(mat[i][j]==0)
                 ans.push({i,j});
             else 
                 mat[i][j]=-1;
         }
        }
        int dx[4]={0,0,1,-1};
        int dy[4]={1,-1,0,0};
        while(ans.size()>0){
            auto it=ans.front();
            ans.pop();
        for(int i=0;i<4;i++){
            int coly=it.second+dy[i];
            int colx=it.first+dx[i];
         if(colx>=0&&coly>=0&&colx<mat.size()&&coly<mat[0].size()&&mat[colx][coly]==-1)
         {
             ans.push({colx,coly});
             mat[colx][coly]=mat[it.first][it.second]+1;
         }
        }
        }
        
        return mat;
    }
    
};