#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

namespace funkcja
{
    template < typename T >
    void zamien(T&a,T&b)
    {
        T temp = a;
        a = b;
        b = temp;
    }
}

int main()
{
    setlocale(LC_CTYPE, "Polish");

    double a,b;
    cout<<"Podaj dwie liczby (a i b): "<<endl;
    cin>>a;
    cin>>b;

    funkcja::zamien(a,b);
    cout<<"Wartosc a= "<<a<<" i b= "<<b<<endl;

    string s1,s2;
    cout<<"Podaj dwa wyrazy (string1 i string2): ";
    cin>>s1;
    cin>>s2;

    funkcja::zamien(s1,s2);
    cout<<"string1= "<<s1<<" i string2= "<<s2<<endl;

    return 0;
}