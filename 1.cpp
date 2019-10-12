#include<iostream>
using namespace std;
int main()
{   int n, a[100],b,i;
    cout<<"welcome to the world of array";
    cout<<"\nhow many elements u want to enter\n";
    cin>>n;
    cout<<".....start entering the elements.....\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter what u want to do\n";
    cout<<"1.insertion\n";
    cout<<"2.deletion\n";
    cout<<"3.searching\n";
    cout<<"4.sorting\n";
    cout<<"5.updation\n";
    cin>>b;
    switch(b)
    {
        case 1:  void insertion(int e,int p,int n);
              break;
        case 2: void deletion(int p,int n);
              break;
        case 3: void searching(int e,int n);
              break;
        case 4: void sorting();
        case 5: void updation(int e,int p,int n);
        break;
        default : void show(int n);
    }

}
