#include <stdio.h>
int linerSearch(int A[],int n,int x);
int main()
{
   int A[100],n,x,linear_Search,search,i;
   printf("Enter number of elements in array: \n");
   scanf("%d",&n);
   printf("Enter Number Of Search: \n");
   scanf("%d",&x);
   for(i = 0; i < n; i++)
   {
    scanf("%d",&A[i]);

   }
   printf("Enter Number you: \n");
   scanf("%d",&x);
   search = linerSearch(A,n,x);
   printf("search = %d",search);

   return 0;

}

int linerSearch(int A[],int n,int x)
{
  int i;
  for(i = 0; i <= n; i++)
  {
    if(A[i] == x)
    {
      return i;
    }

  }
  return -1;

}
