/* Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6] */


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        vector<int>ans;
        int product=1;
        for(int i=0;i<nums.size();i++){
            product=product*nums[i];
            ans.push_back(product);
        }
        product=1;
        for(int i=nums.size()-1;i>0;i--){
            ans[i]=ans[i-1]*product;
            product=product*nums[i];
        }
        ans[0]=product;
        return ans;
    }
};
