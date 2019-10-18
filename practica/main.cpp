#include <iostream>

using namespace std;

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
void invertir_recursivo(char *ca,int tam,int i=0){
    char *fin= ca+tam-i;
    if (i>tam){
        swap(*ca,*fin);
        invertir_recursivo(++ca,tam--,++i);
    }
}
bool palindrome(char *caden){
    char *fin = caden + tam_recur(caden)-1;
    if (*caden==*fin){
        return true;
    }
    else
        return false;
}
int palindrome_recursivo(char *cad, int inicio,int fin){
    if(fin <= inicio ){
        return true;
    }
    if(inicio == fin){
        return true , palindrome_recursivo(cad,inicio++,fin--);
    }
    return false;
}
int main(){
    char cadena[]="rotor";
    int tam=tam_cad(cadena)-1;
    int ini=tam_cad(cadena);
    cout << cadena << endl;
    cout << tam_cad(cadena) << endl;
    cout << tam_recur(cadena) << endl;
    invertir(cadena);
    cout << cadena << endl;
    cout << palindrome(cadena)<< endl;
    invertir_recursivo(cadena,tam);
    cout << cadena << endl;
    cout << palindrome_recursivo(cadena,ini,tam) << endl;
    return 0;
}
