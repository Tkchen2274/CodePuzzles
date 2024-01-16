// trial 1
// naive way. use 2 forloops and check each pairing
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
// trial 2
// use a hashmap. Loop through the entire vector. each time subtract the target from the current value. check if that value is already in the map. if it's already in the map, return else you can add that value with its index to the map and move to the next value

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        int temp = 0;
        vector<int> test;

        for (int i = 0; i < nums.size(); i++ ){
            temp = target - nums[i];

            if (m.find(temp) == NULL){
                m[nums[i]] = i;
                }
            else {
                test.push_back(m.at(temp));
                test.push_back(i);
                }
            
        }
        return test;
    }
};
