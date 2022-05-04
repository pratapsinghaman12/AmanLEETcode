class Solution {
public:
    vector<vector<int>>row{9,vector<int>(10,0)};
    vector<vector<int>>col{9,vector<int>(10,0)};
    vector<vector<int>>box{9,vector<int>(10,0)};
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                   if(isdigit(board[i][j]))
                   {
                       int d=board[i][j]-'0';
                       if(row[i][d]||col[j][d]||box[(i/3)*3+j/3][d])
                       {
                           return false;
                       }
                       row[i][d]=d;
                       col[j][d]=d;
                       box[(i/3)*3+j/3][d]=d;
                   }
            }
        }
                      return true;
    }
};