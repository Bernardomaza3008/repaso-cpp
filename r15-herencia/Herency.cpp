#include <iostream>
using namespace std;
#include <string>

class persona{
    public:
    persona(){cout<<"persona"<<endl;}
    ~persona(){cout<<"persona"<<endl;}
};
class empleado : public persona{
    public:
    empleado(){cout<<"empleado"<<endl;}
    ~empleado(){cout<<"empleado"<<endl;}
};
class gerente : public empleado{
    public:
    gerente(){cout<<"gerente"<<endl;}
    ~gerente(){cout<<"gerente"<<endl;}
};
main(){
    cout<<"--- inicio ---"<<endl;
    gerente a;
    cout<<"--- fin ---"<<endl;
return 0;
}
//Al compilar y correr el codigo se genera persona empleado gerente
//luego sale cout<<"fin" y termina con gerente empleado persona
//los constructores y destructores se llaman en el orden correcto, el problema
//radica en no llamar directamente a los destructores, por lo que solo hasta terminar el codigo
//en return 0; se llaman los constructores, despues del ultimo cout.