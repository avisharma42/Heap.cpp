class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
        // code here
        int  n = arr.size();
        vector<int> temp;
        int idx = 0;
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i = 0 ; i< n ; i++){
             pq.push(arr[i]);
            if(pq.size()>k){
                temp.push_back(pq.top());
                idx++;
                pq.pop();
            }
        }
        while(!pq.empty()){
             temp.push_back(pq.top());
                idx++;
                pq.pop();
        }
        for(int i = 0 ;i< n ;i++){
            arr[i] = temp[i];
        }
        
    }
};