class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int> res;
        int mx = INT_MIN;
        for(int i = n-1; i >= 0; i--) {
            if(a[i] >= mx) {
                res.push_back(a[i]);
                mx = a[i];
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
