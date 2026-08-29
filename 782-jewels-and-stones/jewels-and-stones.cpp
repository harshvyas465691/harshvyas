class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int>mpp;
        for(int i =0;i<jewels.size();i++){
            mpp[jewels[i]]=1;
        }int cnt =0;
        for(int i = 0 ;i<stones.size();i++){
            if(mpp[stones[i]]==1)cnt++;
        }
        return cnt;
    }
};