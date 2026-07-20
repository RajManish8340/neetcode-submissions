class Solution {
   public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int s = position.size();
        vector<pair<int, float>> pair;
        for (int i = 0; i < s; i++) {
            pair.push_back({position[i], speed[i]});
        }

        sort(pair.begin(), pair.end(),
             [](auto& left, auto& right) { return left.first > right.first; });

        for (int i = 0; i < s; i++) {
            pair[i].second = (target - pair[i].first) / pair[i].second;
        }

        int fleets = 0;
        float bottle_neck = 0;

        for(int i = 0 ; i < s ; i++) {
            if(pair[i].second <= bottle_neck ) {
                continue;
            }
            if(pair[i].second > bottle_neck){
                fleets++;
                bottle_neck = pair[i].second;
            }
        }
        return fleets;
    }
};
