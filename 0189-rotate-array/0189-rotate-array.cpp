class Solution {
public:
    void rotate(vector<int>& a, int k) {
        int s=a.size();
        k=k%s;
        reverse(a.begin()+(s-k),a.end());
        reverse(a.begin(),a.begin()+(s-k));
        reverse(a.begin(),a.end());
     
        
    }
};