#include <stdio.h>

void Bul(int s[], int n) {
    int i, j;
    int tekrar = 0, kayip = 0;
    int tutucu[n + 1];


    for (i = 1; i <= n; i++) {
        tutucu[i] = 0;
    }


    for (i = 0; i < n; i++) {
        tutucu[s[i]]++;
    }

    for (i = 1; i <= n; i++) {
        if (tutucu[i] == 0) {
            kayip = i;
        } else if (tutucu[i] == 2) {
            tekrar = i;
        }
    }

    printf("Tekrarlayan eleman = %d, Eksik eleman = %d", tekrar, kayip);
}

int main() {
    int s[] = {1, 2, 3, 4, 4, 6};
    int n = sizeof(s) / sizeof(s[0]);
    Bul(s, n);
    return 0;
}

