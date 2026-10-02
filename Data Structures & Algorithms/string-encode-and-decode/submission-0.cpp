class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string;
        for (int i = 0 ; i < strs.size();i++)
        {
            encoded_string += to_string(strs[i].size()) + "#" + strs[i];
        }
      return encoded_string;
    }

    vector<string> decode(string encoded_string) {
        vector<string> decoded_strs ; 
        int i = 0 ;
        while(i < encoded_string.size())
        {
            int j = encoded_string.find('#',i);
            int len = stoi(encoded_string.substr(i,j-i));
                  decoded_strs.push_back(encoded_string.substr(j+1,len));
            i = j + 1 + len ;
        }
        

    return decoded_strs ;

    }
};
