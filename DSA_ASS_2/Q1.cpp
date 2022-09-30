#include<iostream>
#include <stdio.h>
using namespace std;
    int main()
    {
        int vectorx[10];
        int i, n, pos, element, found = 0;
 
        cout << "Enter how many elements" << endl;
        cin >> n;
        cout <<"Enter the elements" << endl;
 
        for (i = 0; i < n; i++)
        {
            cin >> vectorx[i];
        }
 
        cout << "Enter the element to be deleted" << endl;
        cin >>element;
 
        for (i = 0; i < n; i++)
        {
            if (vectorx[i] == element)
            {
                found = 1;
                pos = i;
                break;
            }
        }
 
        if (found == 1)
        {
            for (i = pos; i <  n - 1; i++)
            {
                vectorx[i] = vectorx[i + 1];
            }
 
            cout << "The resultant vector is " << endl;
            for (i = 0; i < n - 1; i++)
            {
                cout <<  vectorx[i] << endl;
            }
 
        }
        else
            cout << "Element" << element << " is not found in the vector";
          return 0;
    }