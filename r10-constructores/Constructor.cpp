#include <iostream>
using namespace std;
#include <string>

class sesion{
    string nombre;
    public:
    sesion(){nombre ="sin nombre"; cout<<"sesion "<<nombre<<endl;}
    sesion(string n){nombre=n; cout<<"sesion "<<nombre<<endl;}
    ~sesion(){cout<<"~sesion "<<nombre<<endl;}
};
sesion global("global");
main(){
    sesion a("a");
    {sesion b("b"); sesion c("c");}
    cout<<"--- medio ---"<<endl;
    sesion d;
}