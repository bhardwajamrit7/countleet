// Last updated: 9/4/2025, 8:48:57 PM
class Solution {
public:
    int findClosest(int x, int y, int z) {
        int m=abs(x-z);
        int n=abs(y-z);
       return (m<n)?1:(n<m)?2:0;
    }
};