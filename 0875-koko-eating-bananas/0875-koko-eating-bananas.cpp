class Solution {
public:
    long long func(vector<int>& a , long long hour , int speed){
        hour = 0;
        for(int i = 0 ; i < a.size() ; i++){
            hour = hour + a[i] / speed;
            if(a[i] % speed != 0) hour++;
        }
        return hour;
    }
    //STORY PROBLEM USUALLY REQUIRES HELPER FUNCTION

    int minEatingSpeed(vector<int>& a, int h) {
        int n = a.size();
        int low = 1 , high = *max_element(a.begin(), a.end());
        int result = -1;
        while(low <= high){
            int mid = low + (high-low) / 2;   //safe way to find mid
            long long hours = func(a,n,mid);
            if(hours > h) low = mid +1;
            else{
                result = mid;
                high = mid -1;
            }
        }
        return result;
    }
};