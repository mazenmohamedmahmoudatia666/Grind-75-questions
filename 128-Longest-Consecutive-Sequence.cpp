class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int> set(nums.begin(), nums.end());
       int Longest_Consecutive = 0;

       for(int i : set){
        if(set.find(i-1) == set.end()){
            // as long as there is no element befor u \thats start of \Sequence\
        int length = 1;
        while(set.find(i + length) != set.end()){
            // if the num that cames after me is bigger than me += 1 is exist
           length++;
        }
         Longest_Consecutive = max(length , Longest_Consecutive);
       }
    }

return Longest_Consecutive;


    }
};


