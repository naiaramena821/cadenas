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
    int j=0;
    char *fin = caden + tam_cad(caden)-1-j;
    for(j=0;caden<fin;j++){
        if(*caden != *fin){
            return false;
        }
        else{
        return true;
        }
    }
}
bool palindrome_recursivo(char *cad,int tam,int j=0){
    char *fin= cad+tam-j;
    for(j=0;cad<fin;j++){
    if(*cad!=*fin){
        return false;
    }
    return true;
    palindrome_recursivo(++cad,tam--,j++);
}
}
int main(){
    char cadena[]="naiara";
    int tam=tam_cad(cadena)-1;
    cout << cadena << endl;
    cout << tam_cad(cadena) << endl;
    cout << tam_recur(cadena) << endl;
    invertir(cadena);
    cout << cadena << endl;
    cout << palindrome(cadena)<< endl;
    invertir_recursivo(cadena,tam);
    cout << cadena << endl;
    cout << palindrome_recursivo(cadena,tam) << endl;
    return 0;
}
