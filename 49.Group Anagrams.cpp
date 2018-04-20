class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> hash;
        vector<vector<string>> res;
        string tmp;
        for(int i=0; i<strs.size(); i++){
            tmp=strs[i];
            sort(strs[i].begin(),strs[i].end());
            hash[strs[i]].push_back(tmp);
        }
        for(auto itr=hash.begin();itr!=hash.end();++itr)
            res.push_back(itr->second);
        return res;
    }
};