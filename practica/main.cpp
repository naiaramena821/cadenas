#include <iostream>

using namespace std;
//1
//iterativo

int tam_cad(char *cadena){
    int tam=0;
    while (*cadena++ !='\0'){
        tam++;
    }
    return tam;
}

int tam_recur(char *cade){
    int tam=0;
    if (*cade =='\0'){
        return 0;
    }
    return 1+tam_recur(++cade);
}

void invertir(char *cad){
    char *fin = cad + tam_recur(cad)-1;
    while (fin > cad){
        swap(*cad,*fin);
        fin--;
        cad++;
    }

}
int main(){
    char cadena[]={'h','o','l','a','\0'};
    cout << cadena << endl;
    cout << tam_cad(cadena) << endl;
    cout << tam_recur(cadena) << endl;
    invertir(cadena);
    cout << cadena;
    return 0;
}
