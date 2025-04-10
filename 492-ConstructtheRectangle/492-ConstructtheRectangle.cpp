// Last updated: 4/10/2025, 5:50:58 PM
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