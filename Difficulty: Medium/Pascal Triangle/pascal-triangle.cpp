
class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        // code here
        vector<int> row(n, 1);
        for(int i = 2; i < n; i++) {
            for(int j = i - 1; j > 0; j--) {
                row[j] = (row[j] + row[j - 1]) % 1000000007;
            }
        }
        return row;
    }
};
