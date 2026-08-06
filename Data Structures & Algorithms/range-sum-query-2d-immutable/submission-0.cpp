class NumMatrix {
public:
    vector<vector<int>> newMatrix;
    NumMatrix(vector<vector<int>>& matrix) {
        newMatrix.resize(matrix.size()+1, vector<int>(matrix[0].size()+1,0));
        for(int i=1;i<matrix.size()+1;i++){
            for(int j=1;j<matrix[0].size()+1;j++){
                newMatrix[i][j]=matrix[i-1][j-1]+newMatrix[i-1][j]+newMatrix[i][j-1] - newMatrix[i-1][j-1];
            }
        }
        for(int i=0;i<newMatrix.size();i++){
            for(int j=0;j<newMatrix[0].size();j++){
                cout<<newMatrix[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return newMatrix[row2+1][col2+1]+newMatrix[row1][col1]-newMatrix[row2+1][col1]-newMatrix[row1][col2+1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */