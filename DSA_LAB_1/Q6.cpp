#include <iostream>

using namespace std;
 
int main()
{
  int matrix[5][5];

 
  cout << "Enter elements into the matrix: \n";
  for(int i=0; i<5 ; i++){
    for(int j=0; j<5; j++){
      cin >> matrix[i][j];
    }
  }
    
  
  cout << "Diagonal Elements: \n";
  for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
      if(i==j || i+j==5-1)
        cout << matrix[i][j] << "\t";
      else
        cout << " " << "\t";
    }
    cout << "\n";
  }
 
  return 0;
}