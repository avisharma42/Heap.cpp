class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();
        priority_queue<pair<int,pair<int,int>>> pq;
        vector<vector<int>> ans;
        for(int i = 0 ;i<n ; i++){
            int dist = points[i][0]*points[i][0]+points[i][1]*points[i][1];
            pq.push({dist ,{points[i][0],points[i][1]}});
            while(pq.size()>k){
                pq.pop();
            }
        }
        while(!pq.empty()){
            ans.push_back({pq.top().second.first , pq.top().second.second});
            pq.pop();
        }
        return ans;
    }
};