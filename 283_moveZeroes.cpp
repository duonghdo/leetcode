class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    	int i = 0;
    	int count = 0;
        while(i < nums.size() - count){
        	while(nums[i] == 0 && count != nums.size()){
        		nums.erase(nums.begin()+i);
        		nums.push_back(0);
        		count++;
        	}
        	i++;
        }
    }
};