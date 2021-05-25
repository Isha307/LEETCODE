class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n= mat.size();
        int m= mat[0].size();
        if(n*m != r*c)
          return mat;
        std::vector<std::vector<int>> matrix;
        for(int i=0;i<r*c;i++)
        {
            if (i % c == 0)
            {
                matrix.push_back (std::vector<int>());
            }
          matrix[i/c].push_back(mat[i/m][i%m]);
        }
        return matrix;
    }
};
