class Solution {
public:
    int rob(vector<int>& nums) {
        int a = 0;
        int b = 0;

        // dynamic programming solution, similar to knapsack
        // a keeps max at even index, b keeps max at odd index
        // use 2 variables instead of whole array to save space
        for(int i = 0; i < nums.size(); i++){
        	if(i % 2 == 0){
        		a = max(a + nums[i], b);
        	}
        	else{
        		b = max(a, b + nums[i]);
        	}
        }

        return max(a, b);
    }
};