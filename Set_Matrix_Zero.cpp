#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix) {
  int rows = matrix.size();
  int cols = matrix[0].size();
//   vector<vector<int>> temp(matrix);
  map<int, int> rowWithZero;
  map<int, int> colWithZero;
  for (int i = 0; i < rows; ++i) {
    // if (rowWithZero[i])
    //   continue;
    // else {
      for (int j = 0; j < cols; ++j) {
        // if (colWithZero[j] and rowWithZero[i])
        //   continue;
        // else {
          if (matrix[i][j] == 0) {
            colWithZero[j]++;
            rowWithZero[i]++;
          }
        }
    //   }
    // }
  }

 for(int i=0;i<rows;++i)
 {
	 for(int j=0;j<cols;++j)
	 {
		 if(colWithZero[j] + rowWithZero[i] > 0)
		 matrix[i][j] = 0;
	 }
 }

}
