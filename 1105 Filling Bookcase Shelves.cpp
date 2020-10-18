class Solution {
public:
    int minHeightShelves(vector<vector<int>>& books, int shelf_width) {
        vector<int> dp(books.size()+1,0);
        dp[0]=0;
        for(int i=1;i<books.size()+1;i++)
        {
            dp[i]=dp[i-1]+books[i-1][1];
            int swidth=books[i-1][0];
            int height = books[i-1][1];
            for(int j=i-1;j>=1&&swidth+books[j-1][0]<=shelf_width;j--)
            {   height = max(height, books[j-1][1]);
                swidth+=books[j-1][0];
                dp[i]=min(dp[i], dp[j-1]+height);
            }
        }
        return dp[books.size()];
    }
};
