class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        set<int> m;

        for (int i = 0 ; i < nums.size(); i++ ){

            if (m.count(nums[i])){return true;}
            else {m.insert(nums[i]);}
        }
        
        return false;
    }
