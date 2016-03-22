/*
Given an array of size n, find the majority element.
The majority element is the element that appears more than ⌊ n/2 ⌋ times.
You may assume that the array is non-empty and the majority element always exist in the array.
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major = 0, n = nums.size();
        for(int i = 0, mask = 1; i < 32; i++, mask <<= 1) {
            int bitcount = 0;
            for(int i = 0; i < n; i++) {
                if(nums[i] & mask) bitcount++;
                if(bitcount > n/2) {
                    major |= mask;
                    break;
                }
            }
        }
        return major;
    }
};