/*
* Given an array of integers, find if the array contains any duplicates. 
* Your function should return true if any value appears at least twice in the array, 
* and it should return false if every element is distinct.
*/
class Solution {
public:
	//44ms in jeetcode
	bool containsDuplicate(vector<int>& nums) {
		sort(nums.begin(),nums.end());
		if(nums.size()==1){
			return false;
		}
		for(int i=0,n=nums.size();i<n-1;i++) {
			if(nums[i]==nums[i+1]) {
				return true;
			}
		}
		return false;
	}
	
	//40ms O(n + nlogn)
	bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return unique(nums.begin(), nums.end()) != nums.end();//unique function, similar with shell.
    }
	
	//O(n) using hash_set
	bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> hset;
        for(auto &v : nums) {
            if(hset.find(v) == hset.end())
                hset.insert(v);
            else
                return true;
        }
        return false;
    }
};