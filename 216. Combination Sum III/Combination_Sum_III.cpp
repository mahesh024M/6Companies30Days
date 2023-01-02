class Solution {
public:

void helper(int ind,int k,int n,vector<int>&ds,vector<vector<int>> &ans){
    
    if(n==0 && k==0){
        ans.push_back(ds);
        return;
    }
    if(ind>=10 || k<0 || n<0){
        return;
    }

    
        //skip
         helper(ind+1,k,n,ds,ans);

        //pick
        ds.push_back(ind);
        helper(ind+1,k-1,n-ind,ds,ans);
        ds.pop_back();
        
       
        

}

    vector<vector<int>> combinationSum3(int k, int n) {

      
        vector<vector<int>> ans;
      
        vector<int>ds;
        helper(1,k,n,ds,ans);

       
          return ans;
        
    }
};