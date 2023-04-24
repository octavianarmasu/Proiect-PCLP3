#include "phone.h"

void add(phone* p, char* name, char* phonenumber, int size) {
  int len_name = strlen(name);
  int len_number = strlen(phonenumber);
  p[size - 1].name = malloc(len_name * sizeof(char));
  p[size - 1].phonenumber = malloc(len_number * sizeof(char));
  strcpy(p[size - 1].name, name);
  strcpy(p[size - 1].phonenumber, phonenumber);
}

void print(phone* p, int size) {
  for (int i = 0; i < size; i++) {
    printf("Name: %s\n", p[i].name);
    printf("Phone number: %s\n", p[i].phonenumber);
    printf("\n");
  }
}

void show(phone* p, char* name, int size) {
  int i;
  int ok = 0;
  for (i = 0; i < size && ok == 0; i++) {
    if (strcmp(name, p[i].name) == 0) {
      ok = 1;
      printf("Number: %s\n", p[i].phonenumber);
    }
  }
  if (ok == 0) {
    printf("Contact not found\n");
  }
}

int verify(phone* p, char* name, int size) {
  for (int i = 0; i < size - 1; i++) {
    if (strcmp(name, p[i].name) == 0) {
      return 0;
    }
  }
  return 1;
}