#include <stdio.h>
#include <string.h>
 

void s(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
 

void permute(char *a, int l, int r)
{
   int i;
   if (l == r)
     printf("%s\n", a);
   else
   {
       for (i = l; i <= r; i++)
       {
          s((a+l), (a+i));
          p(a, l+1, r);
          s((a+l), (a+i)); 
       }
   }
}
 
int main()
{
    char str[] = "ABCDEF";
    int n = strlen(str);
    p(str, 0, n-1);
    return 0;
}
