class Solution {
public:
    int func(vector<vector<int>>& a, int n , int m , int guess){
        int row = n-1;  //start from bottom left
        int col = 0; int count = 0;
        while(row >= 0 and col < m){
            if(a[row][col] <= guess){
                count += row + 1;   //0th row ka element include pls
                col++;  //move to right element
            }
            else row--;  //move to above element
        } 
        return count;
    }
    int kthSmallest(vector<vector<int>>& a, int k) {
        int n = a.size();  int m = a[0].size();
        int low = a[0][0];  int high = a[n-1][m-1];
        int res = -1;
        while(low <= high){
            int guess = (low + high) / 2;
            int ans = func(a,n,m,guess);
            if (ans < k) low = guess + 1;
            else{
                res = guess;
                high = guess - 1;
            }
        }
        return res;
    }
}; // TC = log(max_ele)* O(n + m) , SC = O(n)