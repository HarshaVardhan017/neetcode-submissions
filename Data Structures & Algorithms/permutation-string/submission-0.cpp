class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int sliding_window_length=s1.size();
        int s2_size=s2.size();
        vector<int> freq1(26,0);
        vector<int> freq2(26,0);

        if(sliding_window_length>s2_size) return false;
       int l=0,r=l+s1.size()-1;
       
      
       for(int i=0;i<s1.size();i++)
       {
        freq2[s2[i]-'a']++;
         freq1[s1[i]-'a']++;
       }
       while(r<s2.size())
       {
        if(freq1==freq2)
        {
            return true;
        }
        else{
            if(r==s2.size())
            {
                return false;
            }
           if(r+1<s2.size())
           {
            freq2[s2[r-s1.size()+1]-'a']--;
            freq2[s2[r+1]-'a']++;
           }
        }
        r++;
       }
       return false;


        
    }
};
