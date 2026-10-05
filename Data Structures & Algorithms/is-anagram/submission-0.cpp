class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char, int> sum1;
        unordered_map <char, int> sum2;
        bool ans = true;
        if(s.length() != t.length())
            return false;
        for(int i = 0; i<s.length(); i++){
            char temp = s[i];
            sum1[temp]++;
        }
        for(int i = 0; i<t.length(); i++){
            char temp = t[i];
            sum2[temp]++;
        }
        for(int i = 0; i<s.length(); i++){
            char temp = s[i];
            if(sum1[temp] != sum2[temp]){
                ans = false;
                break;
            }
        }
        return ans;
    }
};
