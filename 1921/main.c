#include <stdio.h>
#include <string.h>

int min_days(int n, char *s, char *f);

int main() {
    int testCases;
    scanf("%d", &testCases);  

    while (testCases--) {

        // The first line of each test case contains a single integer n(1≤n≤10^5) — the number of boxes.
        int numberOfBoxes;
        scanf("%d", &numberOfBoxes);  
        char s[numberOfBoxes+1], f[numberOfBoxes+1];

        // The second line of each test case contains a string s of n characters, where the i-th character is '1' if there is a cat in the i-th box and '0' otherwise. 
        scanf("%s", s);  // posición inicial de los gatos
        
        // The third line of each test case contains a string f of n characters, where the i-th character is '1' if there should be a cat in the i-th box and '0' otherwise.
        scanf("%s", f);  // posición deseada de los gatos

       
        printf("%d\n", min_days(numberOfBoxes, s, f));
    }

    return 0;
}

int min_days(int n, char *s, char *f) {
    int add_cats = 0;
    int remove_cats = 0;
    int i;

    for (i = 0; i < n; i++) {
        if (s[i] != f[i]) {
            if (f[i] == '1') {
                add_cats++;
            } else {
                remove_cats++;
            }
        }
    }

    return add_cats > remove_cats ? add_cats : remove_cats;
}