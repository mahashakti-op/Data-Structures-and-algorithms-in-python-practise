class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int left = 0 , right = people.size()-1 , boats = 0;
        while(left <= right){
            if(people[left] + people[right] <= limit){
                left++;
                right--;
            }
            else right--;
            boats++;    /*because boat is dispatched everytime
                    counting a single person of right as well */
        }
        return boats;
    }
};      //TC = O(nlogn) ; SC = O(1)