#include<iostream>
using namespace std;
void fun(int *a)
{   int i;
    for(i=0;i<=5;i++)
    cout<<a[i]<<"\n";
}

int main()
{
    int a[10],i,s;
    cout<<"enter array elements";
    for(i=0;i<=5;i++)
    cin>>a[i];
    fun(a);
}
/*void fun(int a)
{   cout<<"this element is insrted in array";
    cout<<a<<"\n";
}
int main()
{
    int a[10],i;

    for(i=0;i<4;i++)
    { cout<<"enter array elements";
    cin>>a[i];
    fun(a[i]);
    }
}*/
