class Solution {
public:
    int trap(vector<int>& height) {
          if(height.empty()){
          return 0;
          }
          
          int l = 0;
          int r = height.size()-1;
          int left_height = height[l];
          int right_height = height[r];
          int sum = 0;


          while(l < r){
              if(left_height  < right_height){
                l++;
                left_height = max(left_height , height[l]);
                sum += left_height - height[l];
              }else {
                r--;
                right_height = max(right_height , height[r]);
                sum += right_height - height[r];
              
              }
          }
              return sum;

    }
};
