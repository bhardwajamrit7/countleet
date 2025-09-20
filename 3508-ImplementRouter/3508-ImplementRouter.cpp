// Last updated: 9/20/2025, 10:53:58 PM
class Router {
public:
    int max_size;
    unordered_map<string,vector<int>>packet;
    unordered_map<int,vector<int>>destTimeS;
    queue<string>q;
    Router(int memoryLimit) {
       max_size=memoryLimit;
    }
    
    string KEY(int s,int d, int t){
        return to_string(s)+"_"+to_string(d)+"_"+to_string(t);
    }
    bool addPacket(int source, int destination, int timestamp) {
            string key=KEY(source,destination,timestamp); 
            if(packet.find(key) !=packet.end()){
                return false;
            }
            if(q.size()>=max_size){
                forwardPacket();
            }
            packet[key]={source, destination,timestamp};
            q.push(key);
            destTimeS[destination].push_back(timestamp);
            return true;
    }
    
    vector<int> forwardPacket() {
        if(packet.empty()){
            return {};
        }
        string key=q.front();
        q.pop();
        vector<int>pack=packet[key];// {S,D,T}
        packet.erase(key);

        int D=pack[1];
        destTimeS[D].erase(destTimeS[D].begin());
        return pack;
    }
    
    int getCount(int destination, int startTime, int endTime) {
        auto it=destTimeS.find(destination);//D-{};
        if(it==destTimeS.end() || it->second.empty()){
            return 0;
        }
        auto &timeStamps=it->second; //{T1,T2,T3}
        auto i=lower_bound(timeStamps.begin(),timeStamps.end(),startTime);
        auto j=upper_bound(timeStamps.begin(),timeStamps.end(),endTime);

        return j-i;
    }
};

/**
 * Your Router object will be instantiated and called as such:
 * Router* obj = new Router(memoryLimit);
 * bool param_1 = obj->addPacket(source,destination,timestamp);
 * vector<int> param_2 = obj->forwardPacket();
 * int param_3 = obj->getCount(destination,startTime,endTime);
 */