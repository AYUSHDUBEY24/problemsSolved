class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int n=s.size();
        for(int i=0;i<n;i++){
           char ch=s[i];
           if(ch=='{' || ch=='['|| ch=='('){
            st.push(ch);
           }
           else{
           if(st.size()==0)return false;
           int tp=st.top();
           st.pop();
           if(ch=='}' && tp=='{')continue;
            else if(ch==']' && tp=='[')continue;
             else if(ch==')' && tp=='(')continue;
             else{
                return false;
             }

        }
        }
        if(st.size()==0) return true;
        else{
            return false;
        }

        
    }
};