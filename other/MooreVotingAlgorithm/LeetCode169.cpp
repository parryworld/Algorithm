/*
Given an array of size n, find the majority element.
The majority element is the element that appears more than ⌊ n/2 ⌋ times.
You may assume that the array is non-empty and the majority element always exist in the array.
*/

/*
Moore Voting Algorithm

Mathematically, given a finite sequence (length n) of numbers,
the object is to find the majority number defined as the number 
that appears more than (n/2) times.
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major, cnt = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(cnt == 0) {
                major = nums[i];
                cnt = 1;
            }
            else if(major == nums[i]) {
                cnt++;
            }
            else {
                cnt--;
            }
        }
        return major;
    }
};