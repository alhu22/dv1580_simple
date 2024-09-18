#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int first = atoi(argv[1]);
    int second = atoi(argv[2]);
    int product = first * second;
    printf("%d\n", product);

  return 0;
}
