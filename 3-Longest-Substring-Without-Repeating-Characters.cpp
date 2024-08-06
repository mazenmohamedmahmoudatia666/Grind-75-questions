#include <string>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> set;
        int l = 0; // Left pointer
        int maxLen = 0; // Maximum length of substring without repeating characters

        for (int r = 0; r < s.size(); ++r) {
            // If the character is already in the set, remove characters from the left
            while (set.find(s[r]) != set.end()) {
                set.erase(s[l]);
                l++;
            }
            // Add the current character to the set
            set.insert(s[r]);
            // Update the maximum length of the substring
            maxLen = max(maxLen, r - l + 1);
        }
        
        return maxLen;
    }
};

##################################################################################################################################################
##################################################################################################################################################


#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if (n == 0)
            return 0;

        unordered_map<char, int> mp;
        int l = 0, r = 0, mx = 0;
        while (r < n) {
           // char currentChar = s[r];
            if (mp.find(s[r]) == mp.end() || mp[s[r]] == 0) {
                // If the current character is not in the current substring
                mp[s[r]]++;
                mx = max(mx, r - l + 1);
                r++;
            } else {
                // If the current character is already in the current substring
                mp[s[l]]--; // Remove the leftmost character from the substring
                l++;
            }
        }
        return mx;
    }
};



