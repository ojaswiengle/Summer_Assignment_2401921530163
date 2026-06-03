class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;

        int maxwater=0;

        while(left<right){
            int length=right-left;

            int breadth=min(height[left],height[right]);

            int area=length*breadth;
            maxwater=max(maxwater,area);

            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
        }
        return maxwater;
    }
};
