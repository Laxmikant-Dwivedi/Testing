#include<iostream>
using namespace std;

int func (int noofdays, int first) {
    int i;
    for(i=1;i<first;i++)
      printf(" ");
   for(i=1;i<=noofdays;i++){
      printf("%3d",i);
      if((first+i-1)%7==0)
         printf("\n");
   }
}


int main(){
   int i,noofdays;
   int first;
   printf("enter no of days in a month:\n");
   scanf("%d",&noofdays);
   printf("enter first day in a month:\n");
   scanf("%d",&first);
   func(noofdays, first);
      return 0;
   }
