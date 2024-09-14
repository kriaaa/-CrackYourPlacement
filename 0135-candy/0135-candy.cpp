class Solution {
public:
    int candy(vector<int>& ratings) {
        int size=ratings.size();
        vector<int>left(size,0);
        vector<int>right(size,0);
        int sum=0;

        left[0]=1;
        right[size-1]=1;
        for(int i=1;i<size;i++)
        {
            if(ratings[i]>ratings[i-1])
            {
                left[i]=left[i-1]+1;
            }
            else
            left[i]=1;

        }

        for(int j=size-2;j>=0;j--)
        {
            if(ratings[j]>ratings[j+1])
            {
                right[j]=right[j+1]+1;
            }
            else
            right[j]=1;
        }
        for(int i=0;i<size;i++)
        {
            sum=sum+max(left[i],right[i]);
        }
        return sum;
    }
};