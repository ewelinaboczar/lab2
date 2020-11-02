#include <iostream>

using namespace std;

int fun(int a, int &b);

int main()
{
    int a, b;
    cout<<"Podaj dwie liczby:"<<endl;
    cin>>a;
    cin>>b;

    cout<<"Mnozenie tych liczb wynosi: "<<fun(a,b)<<endl;
    cout<<"Suma tych liczb wynosi: "<<b<<endl;
    
    return 0;
}

int fun(int a, int &b)
{
    int multiplication= a*b;
    b= a+b;
    return multiplication;
}