class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int n = s1.size();
        int m = s2.size();

        if(n > m)
            return false;

        int freq1[26] = {0};
        int freq2[26] = {0};

        
        for(int i = 0; i < n; i++)
        {
            freq1[s1[i] - 'a']++;
            freq2[s2[i] - 'a']++;
        }

        
        bool same = true;

        for(int i = 0; i < 26; i++)
        {
            if(freq1[i] != freq2[i])
            {
                same = false;
                break;
            }
        }

        if(same)
            return true;

   
        for(int i = n; i < m; i++)
        {
            freq2[s2[i] - 'a']++;       

            freq2[s2[i - n] - 'a']--; 

            same = true;

            for(int j = 0; j < 26; j++)
            {
                if(freq1[j] != freq2[j])
                {
                    same = false;
                    break;
                }
            }

            if(same)
                return true;
        }

        return false;
    }
};
