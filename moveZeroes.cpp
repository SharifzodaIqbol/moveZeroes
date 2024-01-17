#include<iostream>
#include<vector>
#include<list>
using namespace std;
class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		int j = 0;
		size_t Size = nums.size();
		for (int i = 0; i < nums.size(); ++i) {
			if (nums[i] != 0) {
				nums[j] = nums[i];
				j++;
			}
		}
		for (int k = j; k < Size; k++) {
			nums[k] = 0;
		}
	}
};
int main() {
	Solution digit;
	vector<int> nums = { 1,0,4,45,0 };
	digit.moveZeroes(nums);
	return true;
}
//1, 0, 4, 45, 0
//1, 4, 45, 0, 0
