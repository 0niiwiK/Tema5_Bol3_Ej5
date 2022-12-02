#include <stdio.h>
#define TAM 50

void pedirCadena(char *cad);
void cadenaArrayLimpio(char *cad, int tama, char *res);
int calculaTamanoCadena(char *cad);
void imprimirSubcadena(char *cad, int tama);


int main() {
    char cadena[TAM];
    printf("Introduzca la cadena original: ");
    pedirCadena(cadena);
    int tama= calculaTamanoCadena(cadena);
    char cad[tama];
    cadenaArrayLimpio(cadena,tama,cad);
    imprimirSubcadena(cad,tama);
    return 0;
}

void pedirCadena(char *cad){
    scanf("%[^\n]", cad);
    fflush(stdin);
}

int calculaTamanoCadena(char *cad){
    int caracteres=0,i=0;
    do {
        caracteres++;
        i++;
    } while (cad[i]!='\0');
    return caracteres;
}

void cadenaArrayLimpio(char *cad, int tama, char *res){
    int j=0;
    for (int i=0; i < tama; i++) {
        while (cad[j]=='\0')
            j++;
        res[i]=cad[j];
        j++;
    }
}

void imprimirSubcadena(char *cad, int tama){
    int n1,n2;
    printf("\nIntroduzca la posicion de inicio de la subcadena: ");
    scanf("%d",&n1);
    fflush(stdin);
    while (n1<0 || n1>tama){
        printf("Posicion fuera de la cadena\nIntroduzca la posicion de inicio de la subcadena: ");
        scanf("%d",&n1);
        fflush(stdin);
    }
    printf("\nIntroduzca la posicion de fin de la subcadena: ");
    scanf("%d",&n2);
    fflush(stdin);
    printf("\nLa cadena elegida es: ");
    while (n2<n1 || n2>tama){
        printf("Posicion fuera de la cadena\nIntroduzca la posicion de fin de la subcadena: ");
        scanf("%d",&n2);
        fflush(stdin);
    }
    for (int i = n1-1; i < n2; ++i) {
        printf("%c",cad[i]);
    }
}