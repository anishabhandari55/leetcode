class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n=mat.size();
        bool rot[4]={true, true, true, true};
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(mat[i][j]!=target[j][n-i-1]){ //checking for 90 degree rotation
                    rot[0]=false;
                }
                if(mat[i][j]!=target[n-i-1][n-j-1]){ //checking for 180 degree rotation
                    rot[1]=false;
                }
                if(mat[i][j]!=target[n-j-1][i]){ // checking for 270 degree rotation
                    rot[2]=false;
                }
                if(mat[i][j]!=target[i][j]){ // checking for 360 degree rotation
                    rot[3]=false;
                }
                }
            }
        return rot[0] || rot[1] || rot[2] || rot[3]; // 1 ored with 0 = 1 {true}
    }
};