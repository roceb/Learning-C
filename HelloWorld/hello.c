#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *get_string(char *print) {
  char buffer[100];
  printf("%s\n", print);
  scanf("%s", buffer);
  size_t len = strlen(buffer);
  char *str = (char *)malloc(len);
  strcpy(str, buffer);
  return str;
}
int get_num(char *print) {
  int num;
  printf("%s\n", print);
  num = getchar();
  return num;
}
char get_char(char *print) {
  char c;
  printf("%s\n", print);
  c = getchar();
  return c;
}

int main() {
  printf("Hello, world!\n");
  char *name = get_string("What is your name? \n");
  printf("%s \n", name);
  return 0;
}
