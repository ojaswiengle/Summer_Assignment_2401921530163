class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int i;
        char ch;
        for( i=0;i<strs[0].size();i++)
        {
             ch=strs[0][i];
        
        for(int j=1;j<strs.size();j++)
        {
            if( i>=strs[j].size()|| ch!=strs[j][i])
            {
                return ans;
            }
           
        }
             ans=ans+ch;
        }
         return ans;
    }

};
