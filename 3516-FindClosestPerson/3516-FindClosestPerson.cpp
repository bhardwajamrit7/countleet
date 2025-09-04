// Last updated: 9/4/2025, 8:43:33 PM
class Solution {
public:
    int findClosest(int x, int y, int z) {
        int m=abs(x-z);
        int n=abs(y-z);
        if(m<n) return 1;
        else if(n<m) return 2;
        else return 0;

    }
};