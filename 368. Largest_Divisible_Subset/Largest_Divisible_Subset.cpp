class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
       
       int n=nums.size();
        vector<int>dp(n,1),hash(n);

        sort(nums.begin(),nums.end());
        int lastindex=0;
      int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            hash[i]=i;
            for(int prev=0;prev<i;prev++){

                if(nums[i]%nums[prev]==0 && dp[i]<1+dp[prev]){
                    dp[i]=1+dp[prev];
                    hash[i]=prev;
                }
            }
            if(maxi<dp[i]){
                maxi=dp[i];
                lastindex=i;
            }
        }

        vector<int>temp;
        temp.push_back(nums[lastindex]);
        while(hash[lastindex]!=lastindex){
            lastindex=hash[lastindex];
            temp.push_back(nums[lastindex]);
        }
        reverse(temp.begin(),temp.end());
        return temp;
        
        
    }
};