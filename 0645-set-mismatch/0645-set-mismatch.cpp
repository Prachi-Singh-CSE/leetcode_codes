class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int duplicate , missing;
        vector<int>ans;
        // firstly loop for finding the duplicate number
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                duplicate = nums[i];
               
            }
        }
        // second loop is for finding the missing number
        for(int i=1 ;i<=nums.size(); i++){ // this will reflect the number from 1 to n 
            bool found = false; // we assume that till now number is not found
            for(int j=0; j<nums.size(); j++){// traverse the array
                if(nums[j] == i){
                    found= true;
                    break;
                }
            }
                if (!found){
                    missing = i;
                    
                }
            
        }
        ans.push_back(duplicate);
        ans.push_back(missing);
        return ans;
    }
};