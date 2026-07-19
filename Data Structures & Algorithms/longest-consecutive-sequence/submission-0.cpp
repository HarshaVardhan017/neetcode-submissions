class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int> numSet;
       for(int i:nums)
       {
        numSet.insert(i);
       }
       int longest=0;
       for(int i:numSet)
       {
        if(!numSet.count(i-1)){
         int  length=1;
          while(numSet.count(i+length))
          {
            length++;
          }
          longest=max(longest,length);
        }
        
       }
       return longest;
        
        
    }
};
