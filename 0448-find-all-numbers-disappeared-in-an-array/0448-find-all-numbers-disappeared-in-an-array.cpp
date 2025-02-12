class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    int n=nums.size();
    int i=0;
    while(i<n){
        int correctindex=nums[i]-1;
        if(nums[correctindex]==nums[i])i++;
        else swap(nums[i],nums[correctindex]);
    }
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(nums[i]!=i+1)ans.push_back(i+1);
    }
    return ans;
    }
};