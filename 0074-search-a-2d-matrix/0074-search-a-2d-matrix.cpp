class Solution {
 public:
  bool searchMatrix(vector<vector<int>>& matrix, int target) {
//       int rows=matrix.size();
//       int columns=matrix[0].size();
//       int low=0;
//       int high=(rows*columns)-1;
//       while(low<=high)
//       {
//           int mid=(low+high)/2;
//           int row=mid/columns;
//           int col=mid%columns;
//           if(matrix[row][col]==target)
//           return 1;
//           else if(matrix[row][col]>target)
//           high=mid-1;
//           else
//           low=mid+1;
//       }
//    return false;
   int rows=matrix.size();
int columns=matrix[0].size();
for(int i=0;i<rows;i++)
{
    for(int j=0;j<columns;j++)
    {
        if(matrix[i][j]==target)
        return 1;

    }
}
return 0;
  }
};
