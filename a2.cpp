#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverse(int r,char *names[])
{  printf("%s",names[1]);
    char t[10];
    int i;
    for(i=0;i<r/2;i++)
    {
        strcpy(t,names[i]);
        strcpy(names[i],names[r-1]);
        strcpy(names[r-1],t);

    }
}
int main()
{
    int i,r;
    printf("enter the no. of names u want to reverse");
    scanf("%d",&r);
    char *names[r];
    printf("enter names");
    for(i=0;i<r;i++)
    {
      names[i]=(char*)malloc(sizeof(char));
      scanf("%s",&names[i]);
    }
    reverse(r,names);
    for(i=0;i<r;i++)
    printf("%s\n",names[i]);
}
