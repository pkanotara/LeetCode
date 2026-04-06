class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        // obstacles
        set<pair<int,int>> blocked;
        for (auto &o : obstacles) {
            blocked.insert({o[0], o[1]});
        }

        // North, East, South, West
        vector<pair<int,int>> directions = {
            {0, 1}, {1, 0}, {0, -1}, {-1, 0}
        };

        int x = 0, y = 0;
        int dir = 0; // North
        int maxDist = 0;

        for (int cmd : commands) {
            if (cmd == -1) {
                // right
                dir = (dir + 1) % 4;
            } 
            else if (cmd == -2) {
                // left
                dir = (dir + 3) % 4;
            } 
            else {
                // move forward
                while (cmd--) {
                    int nx = x + directions[dir].first;
                    int ny = y + directions[dir].second;

                    // stop if obstacle 
                    if (blocked.count({nx, ny})) break;

                    x = nx;
                    y = ny;

                    maxDist = max(maxDist, x * x + y * y);
                }
            }
        }

        return maxDist;
    }
};