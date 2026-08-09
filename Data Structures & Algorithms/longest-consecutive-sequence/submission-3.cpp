class Solution {
public:
    int longestConsecutive(std::vector<int>& nums) {
        std::unordered_map<int, int> mp;
        for(auto i : nums){
            mp[i] = 1; // 1 means unvisited
        }
        
        int mx = 0;
        
        // 1. Iterate over nums, not the map
        for(auto i : nums){
            
            if (mp[i] == 0) { // If already visited, skip
                continue;
            }
            
            int right = i + 1;
            int left = i - 1;
            int cur = 1;
            
            mp[i] = 0; // Mark current as visited
            
            // 2. Safely check if 'right' exists WITHOUT inserting it
            while(mp.count(right) && mp[right] > 0){
                cur++;
                mp[right] = 0; // Mark as visited
                right++;
            }
            
            // Safely check 'left'
            while(mp.count(left) && mp[left] > 0){
                cur++;
                mp[left] = 0; // Mark as visited
                left--;
            }
            
            mx = std::max(mx, cur);
        }
        return mx;
    }
};