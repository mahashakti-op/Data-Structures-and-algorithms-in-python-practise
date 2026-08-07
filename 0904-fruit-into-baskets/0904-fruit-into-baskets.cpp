class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low = 0 ; int high = 0;
        int res = INT_MIN;
        unordered_map<int,int> f;

        for( high = 0; high<fruits.size(); high++){
            f[fruits[high]]++;
            while(f.size()>2){    //since k=2 read ques. carefully
                f[fruits[low]]--;
                if(f[fruits[low]] == 0)
                f.erase(fruits[low]);
                low++;
            }  
            
            //otherwise <= 2 condition is triggered since its for loop!
            res = max(res, high-low+1);
        }
        return res;
    }
};