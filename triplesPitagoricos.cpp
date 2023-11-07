#include<stdio.h>
#include<math.h>

int main(){
    int max_number;
    printf("Ingrese el numero maximo para buscar triples pitagoricos: ");
    scanf("%d", &max_number);

    printf("Triples Pitagoricos hasta %d: \n",  max_number);
    int a, b, c;

    for (a = 1; a <= 500; a++){
        for (b = a; b <=500; b++){
            c = sqrt (a*a + b*b);

            if (c * c == a*a + b*b & a+b<c){
                printf("%d,%d,%d\n", a, b, c);
            }
        }
    }
    return 0;
}