class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        //sorting the number by increasing frequency
        int n = nums.size();
        vector<int> ans;
        priority_queue<pair<int,int>, vector<pair<int,int>> , greater<pair<int,int>>> pq;
        unordered_map<int, int> mp;
        for(int i = 0; i< n; i++){
            mp[nums[i]]++;
        }
        //we have to use the for each loop
        for(auto it : mp){
            pq.push({it.second,-it.first});
        }
        while(!pq.empty()){
            for(int i = 1 ;i<=pq.top().first ; i++){
            ans.push_back(-pq.top().second);
            }
            pq.pop();
        }
  return ans;
    }
};