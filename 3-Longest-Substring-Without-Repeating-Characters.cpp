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
