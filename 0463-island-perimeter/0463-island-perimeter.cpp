class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter=0;
        int row=grid.size();
        int colm=grid[0].size();
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<colm; j++)
            {
                if(grid[i][j]==1)
                {
                    perimeter+=4;

                    if(i>0 && grid[i-1][j]==1){ //i>0 condn checked to not cross boundary
                        perimeter-=1;
                    }
                    if(j>0 && grid[i][j-1]==1){
                        perimeter-=1;
                    }
                    if(i<row-1 && grid[i+1][j]==1){
                        perimeter-=1;
                    }
                    if(j<colm-1 && grid[i][j+1]==1){
                        perimeter--;
                    }   
                }
            }
        }
        return perimeter;
    }
};