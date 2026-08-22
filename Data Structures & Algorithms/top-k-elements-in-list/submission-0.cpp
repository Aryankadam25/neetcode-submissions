class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> hash;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        vector<pair<int,int>>hash2;
        for(auto num:hash){
            hash2.push_back({num.second,num.first});
        }
        sort(hash2.rbegin(),hash2.rend());
        vector<int>ans(k);
        for(int i=0;i<k;i++){
            ans[i]=hash2[i].second;
        }
        return ans;

    }
};
