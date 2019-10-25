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

bool palindrome_recursivo(char *cad,char *fin)
{

    if(cad > fin){
        return true;
    }
    else{
    if(*cad != *fin){
    return false;
    }
    else{
    palindrome_recursivo(++cad,--fin);
    }
}
}
bool palindrome(char *caden,int tam)
{
    char *fin = caden + tam;
    while(caden<fin){
        if(*caden != *fin){
            return false;
        }
        caden++;
        tam--;
        fin--;
    }
    return true;
}
}
int main(){
    char cadena[]="naiara";
    int tam=tam_cad(cadena)-1;
    char *fin= cadena+tam_cad(cadena)-1;
    cout << cadena << endl;
    cout << tam_cad(cadena) << endl;
    cout << tam_recur(cadena) << endl;
    invertir(cadena);
    cout << cadena << endl;
    cout << palindrome(cadena,tam)<< endl;
    invertir_recursivo(cadena,tam);
    cout << cadena << endl;
    cout << palindrome_recursivo(cadena,fin) << endl;
    return 0;
}
