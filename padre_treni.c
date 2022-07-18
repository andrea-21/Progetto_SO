#include <stdio.h>
#include <string.h>
#include <stdbool.h>

static void erroreInput(void);
static void ETCS1(char* mappa);
static void ETCS2(char* mappa, bool RBC);

int main( int argc, char *argv[]) {
    bool RBC = false;
    if (argc <= 2)
        erroreInput(); 

    if(strcmp(argv[1], "ETCS1")==0)
        ETCS1(argv[2]);
    else if(strcmp(argv[1], "ETCS2")==0) {
        if (argc > 3) 
            if(strcmp(argv[3], "RBC")==0)
                RBC = true;
        ETCS2(argv[2], RBC);
    } else
        erroreInput();
}

static void ETCS1(char* mappa){
    printf("Scelto ETCS1 con %s\n", mappa);
}

static void ETCS2(char* mappa, bool RBC){
    char str[10] = "e con RBC";
    printf("Scelto ETCS2 con %s ", mappa);
    if (RBC)
        printf("%s \n", str);
}

static void erroreInput() {
    printf("Input errato, campi necessari: tipologia, mappa, rbc (opzionale)");
}