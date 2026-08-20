class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>hash;
        for(const auto& s : strs){
            string sorteds=s;
            sort(sorteds.begin(),sorteds.end());
            hash[sorteds].push_back(s);
        }
        vector<vector<string>> result;
        for(auto& a : hash){
            result.push_back(a.second);
        }
        return result;
    }
};