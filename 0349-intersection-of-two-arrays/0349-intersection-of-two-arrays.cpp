class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s1;
        unordered_set<int>ans;
        for(int i=0;i<nums1.size();i++){
            s1.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            if(s1.find(nums2[i])!=s1.end()){
                ans.insert(nums2[i]);
                
            }
        }
        return  vector<int>(ans.begin(),ans.end());
    



        
    }
};