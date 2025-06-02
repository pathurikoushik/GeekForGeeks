class Solution {
  public:
    int binaryToDecimal(string &b) {
        // Code here.
        int decimal = 0;
        int base = 1;
        
        for(int i = b.size() - 1; i >= 0; i--) {
            if(b[i] == '1') {
                decimal += base;
            }
            base *= 2;
        }
        return decimal;
    }
};