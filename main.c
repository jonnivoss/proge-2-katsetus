#include <stdio.h>

typedef struct {
    char nimi[20];
    char erakond[32];
    int haal;
}kanditaat;

int sisestus(kanditaat *osaleja){
    printf("sisesta nimi");
    scanf("%s",osaleja->nimi);
    printf("sisesta erakond");
    scanf("%s",osaleja->erakond);
    printf("sisesta haalte arv");
    scanf("%d", &osaleja->haal);
    if(osaleja->haal < 10){
        return 1;
    }
    return 0;
}

int main() {
    kanditaat kanditaadid[3];
    for (int i = 0; i < 3; ++i) {
        sisestus(&kanditaadid[i]);
    }


    return 0;
}
