class Solution {
  public:
    int finLength(vector<int> color, vector<int> radius) {
        // code here
        stack<pair<int , int>> st;
        for(int i = 0 ; i < color.size(); i++) {
            if(!st.empty()  && st.top().first == color[i] && st.top().second == radius[i]) {
                st.pop();
            }
            else {
                st.push({color[i], radius[i]});
            }
        }
        return st.size();
    }
};