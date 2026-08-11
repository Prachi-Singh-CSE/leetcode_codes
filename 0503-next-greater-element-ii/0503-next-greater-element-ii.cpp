class Solution {
public:

void helper(vector<int>& nge, stack<int>& s, int n, vector<int>& nums){

    for(int i = n-1; i >= 0; i--){

            while(!s.empty() && s.top() <= nums[i]){
                s.pop();
            }

            if(s.empty())
                nge[i] = -1;
            else
                nge[i] = s.top();

            s.push(nums[i]);
        }
    }


    vector<int> nextGreaterElements(vector<int>& nums) {

       int n = nums.size();
       stack<int> s;
       vector<int> nge(n);       
       
        helper(nge, s, n, nums);
        helper(nge, s, n, nums);
       
       return nge; 
    }
};