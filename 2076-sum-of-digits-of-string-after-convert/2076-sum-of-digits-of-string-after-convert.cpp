class Solution {
public:
    int getLucky(string s, int k) {

    string ans="";
    for(char a:s)
    {
        ans+=to_string(a-96);
    }

    while(k>0)
    {
        int temp=0;
        for(char i:ans)
        {
            temp+=i-'0';
        }
        ans=to_string(temp);
        k--;

    }
     return stoi(ans);
    }
   
};