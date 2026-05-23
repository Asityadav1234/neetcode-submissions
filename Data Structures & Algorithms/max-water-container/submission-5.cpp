class Solution {
public:
    int maxArea(vector<int>& heights) {
        int res = 0;
        int i=0,j=heights.size()-1;
        int n = heights.size();
        while(i < j && i<n && j<n){
            res = max(res,min(heights[j],heights[i])*(j-i));
            if(heights[i] <= heights[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return res;
    }
};
