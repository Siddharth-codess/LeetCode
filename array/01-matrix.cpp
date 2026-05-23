class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();

        queue<pair<int, int>> q;
        vector<vector<int>> dist(rows, vector<int>(cols, -1));

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {

                if (mat[i][j] == 0) {
                    q.push({i, j});
                    dist[i][j] = 0;
                }
            }
        }

        int dir[4][2] = {{-1,0}, {1,0}, {0,-1}, {0,1}};

        while (!q.empty()) {
            auto front = q.front();
            q.pop();

            int x = front.first;
            int y = front.second;

            for (auto d : dir) {
                int nx = x + d[0];
                int ny = y + d[1];

                if (nx >= 0 && ny >= 0 && nx < rows && ny < cols 
                    && dist[nx][ny] == -1) {

                    dist[nx][ny] = dist[x][y] + 1;
                    q.push({nx, ny});
                }
            }
        }

        return dist;
    }
};