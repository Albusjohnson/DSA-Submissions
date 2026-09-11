class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
    vector<pair<int,float>> point;
    for(int i=0;i<position.size();i++){
        point.push_back({position[i],((target-position[i])*1.0)/speed[i]});
    }
    sort(point.begin(),point.end());
    int cnt=0;
    float mx=0;
    for(int i=point.size()-1;i>=0;i--){
        if(point[i].second>mx){
            mx=point[i].second;
            cnt++;
        }
    }
    // cout<<mx<<endl;
    // for(auto i:point) {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    // cout<<endl;
    return cnt;
    }
};
