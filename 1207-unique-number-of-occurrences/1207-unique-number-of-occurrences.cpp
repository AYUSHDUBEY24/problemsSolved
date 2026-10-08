class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        set<int>s;

        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
            }
            for(auto x:mp){
                s.insert(x.second);
            }
            if(mp.size()==s.size())return true;
            else{
                return false;
            }
    }
};