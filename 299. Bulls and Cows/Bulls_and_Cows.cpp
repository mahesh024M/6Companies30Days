class Solution {
public:
    string getHint(string s, string g) {
     int n=s.size();
       vector<int> vec1(10,0);
       vector<int> vec2(10,0);

 int bulls=0;
       for(int i=0;i<n;i++){
            vec1[s[i]-'0']++;
            vec2[g[i]-'0']++;
             if(s[i]==g[i]){
               bulls++;
           }
       }

       int comchar=0;
       for(int i=0;i<10;i++){
           if(vec1[i]!=0 && vec2[i]!=0){
               comchar+=min(vec1[i],vec2[i]);
           }
       }

      
       
       
       int val=comchar-bulls;
       string ans="";
       ans+=to_string(bulls);
       ans+="A";
        ans+=to_string(val);
ans+="B";
return ans;

        
    }
};