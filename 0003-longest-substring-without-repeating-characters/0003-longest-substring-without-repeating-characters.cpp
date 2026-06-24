class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n= s.size();

        if(s.empty())
            return 0;
        set<char>st;
        st.insert(s[0]);
        int i=0; int j=1;
        int ans =1;

        while(j<n){
            while(st.find(s[j])!=st.end()){
                st.erase(s[i]);
                i++;
            }
            st.insert(s[j]);
            j++;
            int l=j-i;
            ans=max(ans,l);
        }
        return ans;
    }
};