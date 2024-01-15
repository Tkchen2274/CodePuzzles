class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> test = {};
        for(int i=0; i < nums.size(); i++){
            for (int j = i+1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    test.push_back(i);
                    test.push_back(j);
                }
            }
        }
        return test;
    }
};
// so you can get index and subtract number from the value, then see if it's in the hashmap
