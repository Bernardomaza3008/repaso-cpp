#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <map>
#include <set>

main(){
    vector <string> palabras{"sol","mar","sol","luz","sol","luna"};
    vector <string> claves;
    vector <int> veces;

    for (const string& w : palabras){
        bool esta = false;
        for (size_t i=0; i < claves.size(); ++i){
            if (claves[i]==w){ veces[i]++; esta = true; break;}
            if (!esta){claves.push_back(w); veces.push_back(1);}
        }
    }

    map <string, int> conteo;
    for (string w : palabras) conteo[w]++;

    set <string> d(palabras.begin(), palabras.end());
    cout<<d.size();

    return 0;
}
//vector al tener que recorrer cada palabra diferente en todo el vector
//tarda el numero de palabras diferentes por el numero total del vector
//funciona pero no tan eficiente

//map al buscar por indice es más rapido buscar sus pares
//la opción más eficiente

//set de entrada no regresa la respuesta que se busca
//cambiaria de opinion solo si se pide buscar la cantidad
//diferente de palabras, en ese caso sería el más eficiente