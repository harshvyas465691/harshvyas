class Solution {
public:
    int findJudge(int n, vector<vector<int>>& arr) {
        vector<int> itrust(n + 1, 0);
        vector<int> trustme(n + 1, 0);
        for (int i = 0; i < arr.size(); i++) {
          
            itrust[arr[i][0]]++;
            trustme[arr[i][1]]++;
        }
        for(int i =1;i<=n;i++){
            if(itrust[i]==0 && trustme[i]==n-1)return i;
        }
        return -1;
    }
};