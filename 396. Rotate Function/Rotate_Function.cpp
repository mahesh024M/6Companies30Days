class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n=nums.size();
        int val=0;
        int ans=INT_MIN;
      int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            val+=i*nums[i];
        }

        ans=val;
        int i=1;
        while(i<n){
            int removed=(i-1)*nums[i-1];
            int added=(i+n-1)*nums[(i+n-1)%n];

            val=val-removed+added-sum;
            ans=max(ans,val);
            i++;
        }
        return ans;
        
    }
};