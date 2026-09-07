#include <iostream>
using namespace std;
#include <string>

class Reserva{
    private:
    string sala;
    int personas;
    int horaInicio, horaFin;
    public:
    bool setsala(string a){
        if (a!=""){
            sala=a;
            return true;
        }
        else{
            return false;
        }
    };
    bool setpersonas (int p){
        if (p<=20 && p>=1){
            personas=p;
            return true;
        }
        else{
            return false;
        }
    }
    bool sethoras(int i, int f){
        if (0<= i && i<= f && f<= 23){
            horaInicio=i;
            horaFin=f;
            return true;
        }
        else{
            return false;
        }
    }

};