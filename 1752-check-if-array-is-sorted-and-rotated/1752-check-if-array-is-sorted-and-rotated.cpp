class Solution {
public:
    bool check(vector<int>& nums) {

        int count = 0;
        int n = nums.size();
        //check for cases =[1,2,3,4,5]
        for(int i=1; i<n ; i++){
            if(nums[i-1]>nums[i]){
                count++;
            }
        }
        // check for [5,1,2,3,4]
        if(nums[n-1]>nums[0]){
            count++;
        }
        return count<=1;
    }
};