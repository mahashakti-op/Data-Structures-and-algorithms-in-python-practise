class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;

        int lMax = 0;
        int rMax = 0;
        int ans = 0;

        while (left <= right) {
            lMax = max(lMax , height[left]);
            rMax = max(rMax, height[right]);

            if(lMax < rMax){
                /*min of lmax and rmax is lMax and it is the 
                deciding factor of it's adjacent right bars
                for how much water they can trap */
                ans += lMax - height[left];
                left++;
            }
            else {  //right is the deciding factor (its smaller)
                ans+= rMax - height[right];
                right--;
            }
        }    
        return ans;
    }
};