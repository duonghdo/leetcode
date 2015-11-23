class Solution {
public:
    int majorityElement(vector<int>& nums) {
    	// boyer-moore majority vote algorithm
    	int candidate = nums[0], count = 1;
    	for(int i = 1; i < nums.size(); i++){
    		if(count == 0){
    			candidate = nums[i];
    		}
    		if(candidate == nums[i]){
    			count++;
    		}
    		else count--;
    	}

    	return candidate;
    }
};