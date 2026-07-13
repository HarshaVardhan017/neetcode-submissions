class Solution {
public:
    bool isPalindrome(string s) {
        int left=0;
        string str;
        for(const char& c: s)
        {
            if(isalnum(c)){
                str+=tolower(c);
            }
        }
        int right=str.length()-1;

        while(left<right)
        {
            
            if(str[left]!=str[right]){
              return false;
            }
            left++,right--;
        }
        return true;
        
    }
};
