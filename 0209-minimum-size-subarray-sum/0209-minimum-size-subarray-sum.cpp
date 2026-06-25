class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int n=nums.size();
       int i=0;
       int j=0;
       int ans=INT_MAX;
       int sum=0;
       while(j<n){
        sum=sum+nums[j];
        while(sum>=target){
            int len =j-i+1;
            ans=min(len,ans);
            sum=sum-nums[i];
            i++;
        }
        j++;
       }
      if(ans==INT_MAX)return 0;
      
      else{
        return ans;
      }



    }
};