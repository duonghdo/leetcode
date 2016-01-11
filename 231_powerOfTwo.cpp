class Solution {
public:
    bool isPowerOfTwo(int n) {
    	if(n < 0) return false;
    	int count = 0;
    	while(n && count < 2){
    		n &= n-1;
    		count++;
    	}
    	if(count == 1) return true;
    	return false;
    }
};