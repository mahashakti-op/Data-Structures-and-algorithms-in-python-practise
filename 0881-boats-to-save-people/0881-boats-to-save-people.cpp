class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int left = 0 , right = people.size()-1 , boats = 0;
        while(left <= right){
            if(people[left] + people[right] <= limit){
                left++; right--;
            }
            else right--;
            boats++;
                /*because a boat is dispatched everytime
                even counting left++; i.e a single person */
        }
        return boats;
    }
};