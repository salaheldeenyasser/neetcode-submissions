class Solution {
public:
    int maxArea(vector<int>& heights) {
        int MA = 0;
        int left = 0;
        int right = heights.size() - 1;\

        while(right > left){
            int tempMA;
            if(heights[left] > heights[right]){
                tempMA = heights[right]*(right - left);
                right--;
            }
            else{
                tempMA = heights[left]*(right - left);
                left++;
            }

            if(tempMA > MA){
                MA = tempMA;
            }
        }

        return MA;
    }
};
