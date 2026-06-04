class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();
        vector<int> temp(m*n);
        if(m*n!=r*c)
        {
            return mat;
        }else{
            for(int i=0;i<m;i++)
            {
                for(int j=0;j<n;j++)
                {
                  temp[i*n+j]=mat[i][j];
                }
                
            }
            vector<vector<int>> reshape(r,vector<int>(c));
            int k=0;
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                    reshape[i][j]=temp[k];
                    k++;
                }
            }
            return reshape;
        }
    }
};
