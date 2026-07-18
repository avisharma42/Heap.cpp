class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp;
        int idx = 0;
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i = 0; i< n; i++){
            pq.push(nums[i]);
        }
        while(!pq.empty()){
             temp.push_back(pq.top());
            pq.pop();
        }
       return temp;
    }
};