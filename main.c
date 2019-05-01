#include <stdio.h>
#include <stdlib.h>

char *str_comp(char *desk,char *src,int z);

int main()
{
    int n=20,c;
    char name1[20]="happyness";
    char name2[20]="great";
    c=str_comp(name1,name2,n);
    if (c==0)
    {
       printf("%s is bigger than %s", name2,name1);
    }
    else if (c==1)
    {
       printf("%s is smaller than %s",name2,name1);
    }
    else if (c==2)
    {
       printf("Sentences are same");
    }
}

char *str_comp(char *desk,char *src,int z)
{
    int a=0;
    while (a<z)
    {
        if (*desk<*src)
        {
            return 0;
        }
        else if (*desk>*src)
        {
            return 1;
        }
        else
        {
            desk++;
            src++;
        }
    a++;
    }
return 2;
}
