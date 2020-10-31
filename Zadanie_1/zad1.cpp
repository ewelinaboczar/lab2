#include <iostream>
#include <algorithm>

using namespace std;

void swap(int *a,int *b);

int main()
{
    int a;
    int b;
    cout<<"Podaj dwie liczby"<<endl;
    cin>>a;
    cin>>b;
    cout<<"a= "<<a<<"\tb= "<<b<<endl;

    if(a>b)
    {
        cout<<"Pierwszy podany argument jest wiekszy niz drugi"<<endl;
        cout<<"Przed zamiana: a= "<<a<<" b= "<<b<<endl;
        swap(&a,&b);
        cout<<"Po zamianie: a= "<<a<<" b= "<<b<<endl;
    }
    else
    {
        cout<<"Drugi podany argument jest wiekszy niz pierwszy"<<endl;
        cout<<"a= "<<a<<" < b= "<<b<<endl;
    }
    
    
    return 0;
}

void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}