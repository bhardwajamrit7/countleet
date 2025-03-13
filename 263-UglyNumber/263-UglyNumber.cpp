class Solution {
    void primeFactorArr(vector<int>&arr,int n){
         if(n%2==0){
        arr.push_back(2);
        while(n%2==0){
            n/=2;
        }
       }
       for(long long int i=3;(long long) i*i<=n;i+=2){
        if(n%i==0){
            arr.push_back(i);
            while(n%i==0){
                n/=i;
            }
        }
       }
       if(n>1) arr.push_back(n);
    }
public:
    bool isUgly(int n) {
        vector<int>arr;
        if(n<=0) return false;
        if(n>0 && n<=2) return true;
      primeFactorArr(arr,n);


      for(auto it:arr){
        cout<<it<<" ";
      }
      for(int i=0;i<arr.size();i++){
        if(arr[i]>5) return false;
      }
      return true;
    }
};