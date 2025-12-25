class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size() - 1;
        long long maxi = 0;

        while (i < j) {
            int width = j - i;
            int h = min(height[i], height[j]);
            long long area = 1LL * width * h;

            maxi = max(maxi, area);

            if (height[i] < height[j])
                i++;
            else
                j--;
        }

        return maxi;
    }
};
