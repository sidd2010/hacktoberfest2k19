#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int len(char *ptr)
{
    int i;
    for(i=0;*(ptr+i)!='\0';i++);
    return i;
}
void reverse(int d,char *ptr)
{
    int i;
    char t;
    for(i=0;i<d/2;i++)
    {
        t=ptr[i];
        ptr[i]=ptr[d-1-i];
        ptr[d-1-i]=t;
    }
        return;
}
int main()
{
    char ptr[10];
    int i,d;
    printf("enter the string");
    scanf(" %s",ptr);
    d=len(ptr);
    printf("lenght of the string     %d\n", d);
    reverse(d,ptr);
    printf("reversed string%s\n",ptr);
}
