#include <iostream>

using namespace std;

int fun(int a, int b, int &sum);

int main()
{
    int a, b, sum=0;
    cout<<"Podaj dwie liczby:"<<endl;
    cin>>a;
    cin>>b;

    cout<<"Mnozenie tych liczb wynosi: "<<fun(a,b,sum)<<endl;
    cout<<"Suma tych liczb wynosi: "<<sum<<endl;
    
    return 0;
}

int fun(int a, int b, int &sum)
{
    int multiplication= a*b;
    sum= a+b;
    return multiplication;
}