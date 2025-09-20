// Last updated: 9/20/2025, 11:08:08 PM
class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        auto gain =[](int pass, int total){
            return (double)(pass+1)/(total+1)- (double)pass/total;
        };

        priority_queue<pair<double,pair<int,int>>>pq;

        for(auto &p : classes){
            pq.push({gain(p[0],p[1]),{p[0],p[1]}});
        }

        while(extraStudents--){
            auto [g, pt]= pq.top();
            pq.pop();
            int pass=pt.first, total=pt.second;
            pass++;
            total++;
            pq.push({gain(pass,total),{pass,total}});
        }

        double sum=0.0;
        while(!pq.empty()){
            auto [g,pt]=pq.top();
            pq.pop();
            sum+=(double)pt.first/pt.second;
        }
        return sum/classes.size();
    }
};