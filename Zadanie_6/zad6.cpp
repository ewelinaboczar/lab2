#include <iostream>

using namespace std;

template <typename T>
void zamien(T&a,T&b)
{
    T temp(move(a));
    a=move(b);
    b=move(temp);
}

int main()
{
    double a,b;
    cout<<"Podaj dwie liczby (a i b): "<<endl;
    cin>>a;
    cin>>b;
    cout<<"Przed zamiana a= "<<a<<" i b= "<<b<<endl;
    zamien(a,b);
    cout<<"Po zamianie a= "<<a<<" i b= "<<b<<endl;

    return 0;
}