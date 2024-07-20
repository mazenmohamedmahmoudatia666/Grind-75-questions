#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;



class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";
        
        for (int i = 0; i < strs.size(); i++) {
            string str = strs[i];
            result += to_string(str.size()) + "#" + str;
        }
        
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        
        int i = 0;
        while (i < s.size()) {
            int j = i;
            while (s[j] != '#') {
                j++;
                // 5
            }
            int length = stoi(s.substr(i, j - i));
            // (5)#    // "5" string   to 5 number
            string word = s.substr(j + 1, length);
            // 5#(hello)
            result.push_back(word);
            i = j + 1 + length;

            /*
                 "4 # neet"
                  i
                    j j+1
            */
        }
        
        return result;
    }
};
