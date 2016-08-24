class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int diffBit = 0;
        for(int i = 0; i < nums.size(); i++){
        	diffBit ^= nums[i];
        }

        // get rightmost different bit
        diffBit = (diffBit & (diffBit - 1)) ^ diffBit;

        vector<int> result = {0, 0};

        for(int i = 0; i < nums.size(); i++){
        	if((nums[i] & diffBit) == 0){
        		result[0] ^= nums[i];
        	}
        	else{
        		result[1] ^= nums[i];
        	}
        }

        return result;
    }
};