//1. Two Sum
//Question
//Editorial Solution 
//My Submissions 
//
//Total Accepted: 338237
//Total Submissions: 1204244
//Difficulty: Easy
//Contributors: Admin 
//
//Given an array of integers, return indices of the two numbers such that they add up to a specific target.
//You may assume that each input would have exactly one solution.
//Example:
//Given nums = [2, 7, 11, 15], target = 9,
//
//Because nums[0] + nums[1] = 2 + 7 = 9,
//return [0, 1].
//
//UPDATE (2016/2/13):
//The return format had been changed to zero-based indices. Please read the above updated description carefully. 
#include <vector>
#include <map>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    	map<int,int> m_diff;
        vector<int> result;
		int diff;
		for(int i = 0;i < nums.size();i++){
			if (m_diff.end() != m_diff.find(nums[i])) {
				result.push_back(m_diff[nums[i]]);
				result.push_back(i);
				break;
			}
			else {
				diff = target - nums[i];
				m_diff.insert(pair<int,int>(diff, i));
			}
		}
		return result;
	}
};

int main(int argc,char *argv[])
{
	vector<int> nums = { 1,2,4,6,7 };
	vector<int> result;
	Solution sl;
	result = sl.twoSum(nums, 9);
	cout << result[0]<<"   "<<result[1] << endl;
	return 1;
}


