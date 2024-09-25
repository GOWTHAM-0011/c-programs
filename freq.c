// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    // Write C code here
   char a[100]b[100];
   scanf("%s\n%s",a,b);
   int f[123]={0},h;
   int l=strlen(a);
   for(int i=0;i<l;i++)
   {
       h=a[i];
       f[h]++;
   }
   for(int j=0;j<123;j++)
   {
       if(f[j]!=0)
       {
           printf("%c %d\n",j,f[j]);
       }
   }
   
}