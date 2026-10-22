class Solution {
public:
    int maximumSum(vector<int>& a) {
        int power = 0;  //one array deleted rn: null
        int nopower = a[0];
        int res = a[0];
        int i = 0;
        
        for(int i = 1; i < a.size(); i++){
            int V1 = a[i];      //individual cuurent ele
            int V2 = nopower + a[i];    //w/o deletion
            int V3 = power + a[i];  //with deletion
            int V4 = nopower;   //current ele deleted
            
            nopower = max(V1,V2);
            power = max(V3,V4);
            res = max(res , max(power,nopower));
        }
        return res;
    }
};