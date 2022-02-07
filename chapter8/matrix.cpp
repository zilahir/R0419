#include <iostream>
#include <fstream>
using namespace std;

void print_matrix(int matrix[5][5]);
int calculate_sum(int matrix[5][5]);

 int count_sum(int mat[5][5])
 {
    int m = 5;
    int n = 5;
    int sum = 0, i, j;

    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j) {
            sum += mat[i][j];
        }
    }

    return sum;

 }

int main(void)
{
  int matrix[5][5];
  int sum;
  ifstream file("matrix.txt");
  if (!file){
        cout << "File cannot be opened!";
  }
  else {
    for (int y=0; y<5;y++){
          for (int x=0;x<5;x++){
            file >> matrix[y][x];
          }
    }
    file.close();
    cout << "Matrix:" << endl;
    // print_matrix(matrix);
    sum = count_sum(matrix);
    cout << "Sum of elements: " << sum << endl;
  }
} 