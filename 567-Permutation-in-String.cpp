#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l = 0;
        unordered_map<char, int> mp1, mp2;

        // Fill mp1 with the characters of s1
        for (char c : s1) {
            mp1[c]++;
        }

        for (int r = 0; r < s2.size(); r++) {
            // Add the current character to the window map
            mp2[s2[r]]++;

            // If the window size exceeds s1 size, remove the leftmost character
            if (r - l + 1 > s1.size()) {
                if (--mp2[s2[l]] == 0) {
                    mp2.erase(s2[l]);
                }
                l++;
            }

            // If the current window matches the frequency map of s1, return true
            if (mp1 == mp2) {
                return true;
            }
        }

        return false;
    }
};
