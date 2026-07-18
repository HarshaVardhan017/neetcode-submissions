class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,res=0;
        unordered_set<char> seq;
        for(int r=0;r<s.size();r++)
        {
            while(seq.find(s[r])!=seq.end())
            {
                seq.erase(s[l]);
                l++;
            }
            seq.insert(s[r]);
            res=max(res,r-l+1);
        }
        return res;
    }
};
