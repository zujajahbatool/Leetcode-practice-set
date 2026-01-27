class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int>ans(2,0);
        for(int width=sqrt(area); width>=1; width--){
            int length=area/width;
            if(area==length*width){
                ans[0] = length;
                ans[1] = width;
                break;
            }
        }
        return ans;
    }
};