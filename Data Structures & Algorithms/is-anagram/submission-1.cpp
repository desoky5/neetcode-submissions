class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false ;
        int counts[26] = {0};
        for (char c :s)
        {
             counts[c-'a']++;
        }
        int countt[26] = {0};
         for (char c :t)
       {
            countt[c-'a']++;
       }
        for (char i = 0 ; i < 26 ; i ++ )
        {
            if (countt[i] != counts[i]) return false ;
        }
        return true ;

        
    }
};
