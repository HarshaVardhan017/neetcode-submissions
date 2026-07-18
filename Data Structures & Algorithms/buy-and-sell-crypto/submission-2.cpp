class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest=prices[0];
        int m_p=0;
        for(int i=0;i<prices.size();i++){
           lowest=min(lowest,prices[i]);
           m_p=max(m_p,prices[i]-lowest);
        }
        
        
        return m_p;
            
                        
        
    }
};
