class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        set<int>st;
        for(int i=0; i<n; i++){
            st.insert(nums[i]);
        }
 
        int index = 0;

    //     for (auto it = st.begin(); it != st.end(); ++it) {
    // int val = *it;
        for(int val:st){
            nums[index] = val;
            index++;
        }
       return st.size();
        
    }
};