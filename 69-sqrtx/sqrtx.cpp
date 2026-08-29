class Solution {
public:
    int mySqrt(int x) {
        int i =0;
        while((long long)((long long )i*(long long)i)<= (long long) x){
            i++;
        }
return (int)i-1;
    }
};