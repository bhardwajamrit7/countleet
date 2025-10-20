// Last updated: 10/20/2025, 8:45:43 PM
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        // int plus=0;
        // int minus=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="++X"||operations[i]=="X++"){
                // plus++;
                x++;
            }
            else {
                x--;
            }
        }
        return x;
    }
};