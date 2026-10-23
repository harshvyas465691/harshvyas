class StockSpanner {
public:

vector<int> arr;

    StockSpanner() {
        arr ={};
    }
    
    int next(int price) {
        int cnt =1;
        arr.push_back(price);
        for(int i =arr.size()-2;i>=0;i--){
            if(price>=arr[i])cnt++;
            else break;
        }
        return cnt;
        
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */