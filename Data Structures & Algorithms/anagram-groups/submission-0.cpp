class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string, vector<string>> m;
       vector<vector<string>> result;
        for(int i = 0; i < strs.size(); i++){
            string word = strs[i];
            string sortword = word;
            sort(sortword.begin() , sortword.end());
            m[sortword].push_back(word);
        }
        for(auto it : m){
            result.push_back(it.second) ;

        }
        return result;
    }
};
