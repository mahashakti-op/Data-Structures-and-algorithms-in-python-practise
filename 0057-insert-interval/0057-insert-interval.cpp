class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size();
        vector<vector<int>> temp;       //array
        bool flag = false;
        for(int i = 0; i <n ; i++){
            if(flag == false and newInterval[0]<intervals[i][0]){
                temp.push_back(newInterval);
                flag = true;
            }
            temp.push_back({intervals[i][0], intervals[i][1]});   //everyone shifted
        }
        if(flag == false) temp.push_back(newInterval);  //since it's greatest so 
        //wrote it at the end of the array by checking that no_one is greater than the new interval

        vector<vector<int>> res;
        int start1 = temp[0][0];
        int end1 = temp[0][1];
        for(int i = 1; i<temp.size(); i++){
            int start2 = temp[i][0];
            int end2 = temp[i][1];
            if(end1 >= start2){
                start1 = start1;    //start1 toh same hi rahega for overlapping intervals
                end1 = max(end1,end2);
            }
            else {      //overlapping finish
                res.push_back({start1,end1});   //store this in our final result
                start1 = start2;
                end1 = end2;
            }
        }
        res.push_back({start1,end1});   //finally reached at the end so store the last element
        return res;
    }
};