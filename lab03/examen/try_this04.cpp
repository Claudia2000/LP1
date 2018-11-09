#include <iostream>
#include <math.h>
using namespace std;

int main()
try
{
    double a;
    double b;
    double c;
    double raiz;
    double rpta1;
    double rpta2;
    cout << "Primer coeficiente";
    cin>>a;
    cout<<endl;
    cout << "Segundo coeficiente";
    cin>>b;
    cout<<endl;
    cout << "Tercer coeficiete";
    cin>>c;
    cout<<endl;
    raiz=(b*b)-(4*a*c);
    if(raiz<0){
        throw runtime_error("Imaginario");
    }
    rpta1=(-b+sqrt(raiz))/(2*a);
    rpta2=(-b-sqrt(raiz))/(2*a);
    cout<<rpta1<<endl<<rpta2;
    return 0;
}
catch(exception & e){
    cerr<<"error: "<<e.what()<<endl;
    return 1;
}
