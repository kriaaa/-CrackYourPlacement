class Solution {
public:


//BRUTE FORCE APPROACH

// void markrow(int i,vector<vector<int>>& matrix)
// {
//      int ncols=matrix[0].size();
//     for(int row=0;row<ncols;row++)
//     {
//         if(matrix[i][row]!=0)
//         {
//             matrix[i][row]=-1;
//         }
//     }
// }

// void markcol(int i,vector<vector<int>>& matrix)
// {
//     int nrows=matrix.size();
//     for(int col=0;col<nrows;col++)
//     {
//         if(matrix[col][i]!=0)
//         {
//             matrix[col][i]=-1;
//         }
//     }
// }
//     void setZeroes(vector<vector<int>>& matrix) {
//      int nrows=matrix.size();
//      int ncols=matrix[0].size();
//      for(int i=0;i<nrows;i++)
//      {
//         for(int j=0;j<ncols;j++)
//         {
//             if(matrix[i][j]==0)
//         {
//             markrow(i,matrix);
//             markcol(j,matrix);

//         }
//         }
//      }


//        for(int i=0;i<nrows;i++)
//      {
//         for(int j=0;j<ncols;j++)
//         {
//             if(matrix[i][j]==-1)
//             {
//                 matrix[i][j]=0;
//             }
//         }

     
//     }
//     }


//BETTER APPROACH
void setZeroes(vector<vector<int>>& matrix)
{
     int nrows=matrix.size();
     int ncols=matrix[0].size();
     vector<int>col(ncols,0);
     vector<int>row(nrows,0);
     for(int i=0;i<nrows;i++)
     {
        for(int j=0;j<ncols;j++)
        {
            if(matrix[i][j]==0)
            {
                 row[i]=1;
                col[j]=1;
               
            }
        }
     }

     for(int i=0;i<nrows;i++)
     {
        for(int j=0;j<ncols;j++)
        {
            if(col[j]==1||row[i]==1)
            {
                matrix[i][j]=0;
            }
        }
     }
}

};

