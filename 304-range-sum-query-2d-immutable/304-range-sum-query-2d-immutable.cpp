class NumMatrix {
public:
    
    
    
    vector<vector<int>> mat;
    int m(int i, int j) {
        return i >= 0 && j >= 0 ? mat[i][j] : 0;
    }
    
    
    
    
    NumMatrix(vector<vector<int>>& matrix) {
         mat = matrix;
        for (int i=0; i<matrix.size(); i++)
            for (int j=0; j<matrix[0].size(); j++)
                mat[i][j] += m(i-1, j) + m(i, j-1) - m(i-1, j-1);
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
          return m(row2, col2) - m(row1-1, col2) - m(row2, col1-1) + m(row1-1, col1-1);
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */