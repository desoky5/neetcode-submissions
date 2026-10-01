class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map< int , int > groups;
        for (int i = 0 ; i < nums.size();i++)
        {
            groups[nums[i]] ++ ; 
        }
        vector<pair<int,int>> v(groups.begin(),groups.end());
        sort(v.begin(),v.end(),[](auto& a, auto& b)
        {
            return a.second>b.second;
        });

        vector<int> result ;
        for(int i = 0 ; i < k ; i ++) result.push_back(v[i].first);
        return result;

        
    }
};
