class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList,                     vector<vector<int>>& secondList) {
        vector<vector<int>> res;
        int i = 0; int j = 0;
        while(i<firstList.size() && j<secondList.size()){      
            int start1 = firstList[i][0];
            int end1 = firstList[i][1];
            int start2 = secondList[j][0];
            int end2 = secondList[j][1];

            if(start1 <= start2){       //1st part -check if they are even overlapping in the first place or vice versa
                if(end1 >= start2){
                    int s = max(start1 , start2);     //2nd part - main condition             check for intersection
                    int e = min(end1 , end2);
                    res.push_back({s,e});        //store the intersection in the result
                }
            }
            else {      //means start2 (j) >= start1 (i)
                if(end2 >= start1){
                    int s = max(start1, start2);
                    int e = min(end1 , end2);
                    res.push_back({s,e});
                }
            }
            if(end1 <= end2) i++;       //3rd part checked 
            else j++;
        }
        return res;
    }
};