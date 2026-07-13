class Solution {
public:
    int trap(vector<int>& height) {
        
        vector<int>lm(height.size()),rm(height.size());
        lm[0]=height[0],rm[height.size()-1]=height[height.size()-1];
        for(int i=1;i<height.size();i++)
        {
            lm[i]=max(lm[i-1],height[i]);
        }
        for(int i=height.size()-2;i>=0;i--)
        {
            rm[i]=max(rm[i+1],height[i]);
        }
        int res=0;
        for(int i=0;i<height.size();i++)
        {
            res+=min(lm[i],rm[i])-height[i];
        }
        return res;
        
        
          
        
    }
};
