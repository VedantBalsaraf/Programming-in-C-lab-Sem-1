#include <stdio.h>
int factorial(int n)
{
    
     if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);

}
int main()
{
   int T, no;
   scanf("%d",&T);
   while(T--)
   {
     scanf("%d",&no);
     printf("%d\n",factorial(no));
   }
 return 0;
}
