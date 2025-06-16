// Last updated: 6/16/2025, 11:47:02 AM
class Solution {
public:
    vector<int> constructRectangle(int area) {
        int width=sqrt(area);
        while(area%width!=0){
            width--;
        }
        return {area/width,width};

    }
};