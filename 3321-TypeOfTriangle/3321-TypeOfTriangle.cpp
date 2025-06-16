// Last updated: 6/16/2025, 11:46:16 AM
class Solution {
public:
    string triangleType(vector<int>& nums) {
       int a=nums[0];
       int b=nums[1];
       int c=nums[2];
       if((a+b)>c &&(b+c)>a &&(a+c)>b){
        if(a==b && b==c && c==a) return "equilateral";
        else if(a!=b && b!=c && c!=a) return "scalene";
        else return "isosceles";
       }
       return "none";
    }
};