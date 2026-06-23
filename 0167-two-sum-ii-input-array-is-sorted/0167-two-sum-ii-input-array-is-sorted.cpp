class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int index1 = 0 , index2 = numbers.size()-1;
        
        vector<int> ans;
        
        while(index1<index2){
           int currSum = numbers[index1] + numbers[index2];
            if(currSum == target){
                ans.push_back(index1+1);
                ans.push_back(index2+1);
                return ans;
            }
            else if(currSum > target){
                index2--;
            }
            else{
                index1++;
            }
        }
    return ans;    
    }

};

