class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<int>timeRequired;
        for(int i=0; i<dist.size(); i++) {
            int m = (dist[i] % speed[i] == 0) ? dist[i]/speed[i] : (dist[i]/speed[i]) + 1;
            timeRequired.push_back(m);
        }
        sort(timeRequired.begin(), timeRequired.end());
        int currentTime = 0;
        int eliminatedMonsters = 0;
        for(int val : timeRequired){
            if(val <= currentTime) break;
            eliminatedMonsters++; currentTime++;
        }
        return eliminatedMonsters;
    }
};