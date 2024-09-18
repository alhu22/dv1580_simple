#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]){
  if (isdigit(argv[1][0]) && isdigit(argv[2][0])) {
    int first = atoi(argv[1]);
    int second = atoi(argv[2]);
    int product = first * second;
    printf("%d\n", product);
    return 0;
  }
  printf("ERROR\n");
  return 1;
}
