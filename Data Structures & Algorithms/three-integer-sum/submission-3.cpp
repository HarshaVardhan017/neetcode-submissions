class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i,j,k;
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]>0){
                break;
            }
            if(i>0&&nums[i]==nums[i-1]) continue;
            j=i+1,k=nums.size()-1;
            while(j<k){
            if(nums[i]*-1==nums[j]+nums[k])
            {
                res.push_back({nums[i],nums[j],nums[k]});
                j++,k--;
                while (j < k && nums[j] == nums[j - 1]) {
                        j++;
                    }
                    while (j < k && nums[k] == nums[k + 1]) k--;
            }
            else if(nums[i]*-1>=nums[j]+nums[k])
            {
              j++;
            }
            else{
                k--;
            }
            
            }
        }
        return res;
        
    }
};
