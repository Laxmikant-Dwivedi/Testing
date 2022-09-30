#include<iostream>
using namespace std;

int main()
{
	int m, n_556, sum = 0;
	cout << "Enter the order of the matrix : ";
	cin >> m >> n_556;
	int i, j;
	int mat[m][n_556];
	cout << "Input the matrix elements\n";
	for(i = 0; i < m; i++)
		{
			for(j = 0; j < n_556; j++)
			cin >> mat[i][j] ;
		}

	cout << "Boundary Matrix\n";
	for(i = 0; i < m; i++)
		{
			for(j = 0; j < n_556; j++)
				{
			if (i == 0 || j == 0 || i == n_556-1 || j == n_556-1)
						{
							cout << mat[i][j] << " ";
							sum = sum + mat[i][j];
						}
					else
							cout <<"  ";
				}
		cout << endl;
	}
	cout << "\nSum of boundary is " << sum << endl;
}