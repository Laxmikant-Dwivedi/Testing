#include<iostream>
using namespace std;
void Lower(int matrix[3][3],int row_556,int col){
    int i,j;
    for(int i=0; i<row_556; i++)
    {
        for(int j =0; j < col; j++)
        {
        if(i<j)
        {
            cout << " " << " ";
        }
        else 
        {
            cout << matrix[i][j] << " ";
        }
    }
    cout << endl;
}
}
void upper(int matrix[3][3],int row,int col){
    int i,j;
    for(int i=0; i<row; i++)
    {
      for(int j =0; j < col; j++)
       {
    if(i>j)
    {
        cout << " " << " ";
    }
    else{
        cout<< matrix[i][j] << " ";
    }
}
cout << endl;
}
}
int main()
{
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int row = 3 , col = 3;
    cout << "Lower Triangular matrix: " << endl;
    Lower(matrix,row,col);
     cout << "Upper Triangular matrix: " << endl;
    upper(matrix,row,col);

}