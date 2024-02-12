#include <stdio.h>

int max_balance(int x, int n); 
int mcd(int a, int b);

int main() {
    int numeroCasosPrueba; // Número de casos de prueba
    scanf("%d", &numeroCasosPrueba);

    while (numeroCasosPrueba--) {
        int x, n; // Dificultad total y número de sub-problemas
        scanf("%d %d", &x, &n);

        // Mostrar el máximo balance para el caso actual
        printf("%d\n", max_balance(x, n));
    }

    return 0;
}

// Calcular el mcd (Máximo Común Divisor)
int mcd(int a, int b) {
    if (b == 0)
        return a;
    return mcd(b, a % b);
}

// Encontrar el máximo equilibrio
int max_balance(int x, int n) {
    // Dividir la dificultad total entre el número de subproblemas
    int subproblem_difficulty = x / n;
    // Encontrar el MCD entre la dificultad de cada subproblema y el número de subproblemas
    return mcd(subproblem_difficulty, n);
}