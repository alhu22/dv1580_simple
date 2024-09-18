#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int first = atoi(argv[1]);
    int second = atoi(argv[2]);
    if (second == 0) {
        printf("DIV ZERO NOT ALLOWED!\n");
        return 1;
    }
    float fraction = (float)first / second;
    printf("%f\n", fraction);

  return 0;
}
