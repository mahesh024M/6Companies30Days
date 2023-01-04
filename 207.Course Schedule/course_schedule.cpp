class Solution {
public:


    bool canFinish(int V, vector<vector<int>>& pre) {
        int count=0;
        vector<int>adj[V];
        for(auto it:pre){
           adj[it[1]].push_back(it[0]);
        }

        queue<int> q;
        vector<int>indegree(V,0);

        for(int i=0;i<V;i++){
            for(auto it:adj[i]){
                indegree[it]++;
            }
        }
        for(int i=0;i<V;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }

        while(!q.empty()){
            int t=q.front();
            q.pop();

            count++;
            for(auto it:adj[t]){
                indegree[it]--;
                if(indegree[it]==0){
                    q.push(it);
                }
            }
        }
        if(count==V) return true;
        return false;

    }
};