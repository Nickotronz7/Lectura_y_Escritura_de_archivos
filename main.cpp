#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <time.h>

using namespace std;

int main() {
    int num = 36864;
    srand(time(NULL));
    FILE * pFile;
    pFile = fopen("/home/nicko/Documents/ClionProjects/Lectura_y_Escritura_de_archivos/36kb", "w+");

    char n[num];
    string s;
    for (int i = 0; i < num-1; ++i) {
        s += to_string(rand()%(1000 -1)) + ',';
    }

    for (int j = 0; j < num-1; ++j) {
        n[j] = s[j];
    }

    fputs(n,pFile);
    fclose(pFile);

    return 0;
}