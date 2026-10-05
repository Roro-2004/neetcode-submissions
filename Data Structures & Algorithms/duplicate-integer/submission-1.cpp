class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        bool ans = false;
        unordered_map <int, int> dups;
        for(int i = 0; i<n ; i++){
            int x = nums[i];
            dups[x]++;
            if(dups[x] > 1){
                ans = true;
                break;
            }
                
           

        }
        return ans;
    }
};