class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> result;

        int n = p.length();
        int m = s.length();

        if(n > m)
            return result;

        int pCount[26] = {0};
        int windowCount[26] = {0};

        
        for(int i = 0; i < n; i++)
        {
            pCount[p[i] - 'a']++;
            windowCount[s[i] - 'a']++;
        }

        bool match = true;

        for(int i = 0; i < 26; i++)
        {
            if(pCount[i] != windowCount[i])
            {
                match = false;
                break;
            }
        }

        if(match)
            result.push_back(0);

       
        for(int i = n; i < m; i++)
        {
            windowCount[s[i] - 'a']++;         

            windowCount[s[i - n] - 'a']--;  

            match = true;

            for(int j = 0; j < 26; j++)
            {
                if(pCount[j] != windowCount[j])
                {
                    match = false;
                    break;
                }
            }

            if(match)
                result.push_back(i - n + 1);
        }

        return result;
    }
};
