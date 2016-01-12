class Solution {
public:
    bool isHappy(int n) {
        // using Floyd cycle detection algorithm
        int turtle = n;
        int rabbit = digitSquareSum(n);
        while(turtle != rabbit){
        	turtle = digitSquareSum(turtle);
        	rabbit = digitSquareSum(digitSquareSum(rabbit));
        }
        return (turtle == 1);
    }

    int digitSquareSum(int n){
    	int sum = 0;
    	int digit;
    	while(n){
    		digit = n % 10;
    		sum += digit * digit;
    		n /= 10;
    	}
    	return sum;
    }
};