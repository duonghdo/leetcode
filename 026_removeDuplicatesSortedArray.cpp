class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    	if(nums.size() < 2) return nums.size();
        int newSize = 1;
        for(int i = 1; i < nums.size(); i++){
        	if(nums[i] != nums[i-1]){
        		nums[newSize++] = nums[i];
        	}
        }
        return newSize;
    }
};