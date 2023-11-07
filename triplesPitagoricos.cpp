#include <stdio.h>
#include <math.h>

int main() {
    int max_number;

    // Solicita al usuario que ingrese el número máximo para buscar triples pitagóricos
    printf("Ingrese el numero maximo para buscar triples pitagoricos: ");
    scanf("%d", &max_number);

    // Imprime un encabezado para mostrar qué se está buscando
    printf("Triples Pitagoricos hasta %d:\n", max_number);

    // Bucle para el primer lado 'a' del triángulo
    for (int a = 1; a <= max_number; a++) {
        // Bucle para el segundo lado 'b' del triángulo, empezando desde 'a' para evitar duplicados
        for (int b = a; b <= max_number; b++) {
            // Calcula el tercer lado 'c' usando el teorema de Pitágoras
            int c = sqrt(a * a + b * b);

            // Verifica si 'c' está dentro del rango máximo y si cumple con las condiciones de un triángulo
            if (c <= max_number && a + b > c) {
                // Si se cumplen las condiciones, imprime el triple pitagórico encontrado
                printf("%d - %d - %d es un triple pitagorico.\n", a, b, c);
            }
        }
    }

    return 0;
}