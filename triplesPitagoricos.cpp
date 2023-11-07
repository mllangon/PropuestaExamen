
#include<stdio.h>
#include<math.h>

int main(){

    int a, b, c; //Declaramos los valores de a, b y c

    printf("Ingrese el valor de a (o un 0 para salir): ");
    scanf("%d", &a); //Leemos el valor de a

    printf("Ingrese el valor de b: ");
    scanf("%d", &b); //Leemos el valor de b

    c = sqrt(pow(a, 2)+pow(b,2)); //Calculamos el valor de c

    //Comprobamos si es un triple pitagorico
    if (c * c == a * a + b * b) {
        printf("%d - %d - %d es un triple pitagorico",a ,b ,c); //Imprimimos los valores del triple pitagorico
    } else{
        printf("No es un triple pitagorico"); //Imprimimos que no es un triple pitagorico
    }
    return 0;
}