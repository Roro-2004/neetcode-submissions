class Solution {
public:
//hashmap answer
    vector<int> twoSum(vector<int>& nums, int target) {
     vector <int> ans;
     unordered_map <int, int> m;// val, idx
     for(int i = 0; i< nums.size(); i++){
        int diff = target - nums[i];
          if(m.contains(diff))//this is new for me
          {
            ans.push_back(m[diff]);
            ans.push_back(i);

        }
        m[nums[i]] = i;
      
     }
     return ans;
    }
};
