#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool qwer(char a)
{
    if((a=='{')|| (a=='(') || (a=='['))
        return true;
    else
        return false;
}
bool asdf(char a,char b)
{
    if((a=='{' && b=='}')||(a=='[' && b==']')||(a=='(' && b==')'))
        return true;
    else
        return false;
}
int main ()
{
    char a[100];
    scanf("%s",a);
    int z=strlen(a),q=0;
    char b[z];
    bool qwe,asd,zxc = true;
    for(int i=0;i<z;i++)
    {
        qwe=qwer(a[i]);
        if(qwe)
            b[q++]=a[i];
        else
        {
            asd=asdf(b[q-1],a[i]);
            if(asd)
                q--;
            else
            {
                zxc=false;
                break;
            }
        }
    }
    if(zxc)
        printf("TRUE");
    else
        printf("FALSE");
}