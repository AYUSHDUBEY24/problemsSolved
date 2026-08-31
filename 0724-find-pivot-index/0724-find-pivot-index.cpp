class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        int n=arr.size();
        long sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];

        }
        long left=0;
        for(int i=0;i<n;i++){
            long right=sum-arr[i]-left;
            if(left==right) return i;
            left+=arr[i];
        }
        return -1;
        
    }
};