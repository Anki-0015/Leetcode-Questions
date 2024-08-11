class Solution {
public:
    int minDays(vector<vector<int>>& grid) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
      
        vector<vector<int>> tmpGridStart(grid);
       
        int rows = grid.size();
        int cols = grid[0].size();
        if(countNumberOfIslands(grid) != 1) return 0;
        for(int i = 0 ; i < rows ; i++){
            for(int j = 0 ; j < cols ; j++){
                grid[i][j] = tmpGridStart[i][j];
            }
        }
       
        for(int i = 0 ; i < rows ; i++){
            for(int j = 0 ; j < cols ; j++){
                if(grid[i][j] == 0) continue;
                vector<vector<int>> tmpGrid(grid);
                grid[i][j] = 0;
                int ans = countNumberOfIslands(grid);
                if(ans != 1) return 1;
                for(int a = 0 ; a < rows ; a++){
                    for(int b = 0 ; b < cols ; b++){
                        grid[a][b] = tmpGrid[a][b];
                    }
                }
            }
        }
        return 2;
    }
    int countNumberOfIslands(vector<vector<int>> &grid){

        int islands = 0;
        int rows = grid.size();
        int cols = grid[0].size();
        for(int i = 0 ; i < rows ; i++){
            for(int j = 0 ; j < cols ; j++){
                if(grid[i][j] == 1){
                    islands += 1;
                    changeGrid(grid, i, j);
                }
            }
        }
        return islands;
    }
    void changeGrid(vector<vector<int>> &grid, int row, int col){
        int rows = grid.size();
        int cols = grid[0].size();
        queue<pair<int, int>> q;
        grid[row][col] = 0;
        vector<int> dr[4] = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
        q.push({row, col});
        while(!q.empty()){
            auto front = q.front();
            q.pop();
            for(auto &ele : dr){
                int tmpR = ele[0] + front.first;
                int tmpC = ele[1] + front.second;
                if(tmpR >= 0 and tmpR < rows and tmpC >= 0 and tmpC < cols and grid[tmpR][tmpC] == 1){
                    grid[tmpR][tmpC] = 0;
                    q.push({tmpR, tmpC});
                }
            }
        }

    }
};
