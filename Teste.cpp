#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gen_random(char *s, const int len) {
	srand(time(NULL));
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
	int i;

    for (i = 0; i < len; ++i) {
        s[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
    }

    s[len] = 0;
}

int main(){
    char caracteres[4000];
    
    gen_random(caracteres, 4000);
    printf("%s\n\n", caracteres);

    return 0;
}