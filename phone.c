#include "phone.h"

void add(phone* p, char* name, char* phonenumber, int size) {
  char* name_aux = malloc(STRING * sizeof(char));
  char* phonenumber_aux = malloc(STRING * sizeof(char));

  strcpy(name_aux, name);
  strcpy(phonenumber_aux, phonenumber);

  p[size - 1].name = name_aux;
  p[size - 1].phonenumber = phonenumber_aux;
}

void print(phone* p, int size) {
  for (int i = 0; i < size; i++) {
    char name_aux[STRING];
    char phonenumber_aux[STRING];
    strcpy(name_aux, p[i].name);
    strcpy(phonenumber_aux, p[i].phonenumber);
    printf("Name: %s\n", name_aux);
    printf("Phone number: %s\n", phonenumber_aux);
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
  for (int i = 0; i < size; i++) {
    if (strcmp(name, p[i].name) == 0) {
      return 0;
    }
  }
  return 1;
}

void delete(phone** p, char* name, int size) {
  int i;
  int j = 0;
  phone* p_aux = malloc((size - 1) * sizeof(phone));
  for (i = 0; i < size; i++) {
    if (strcmp((*p)[i].name, name) != 0) {
      char* name_aux = malloc(STRING * sizeof(char));
      char* phonenumber_aux = malloc(STRING * sizeof(char));
      strcpy(name_aux, (*p)[i].name);
      strcpy(phonenumber_aux, (*p)[i].phonenumber);
      p_aux[j].name = name_aux;
      p_aux[j].phonenumber = phonenumber_aux;
      j++;
    }
  }
  for (i = 0; i < size; i++) {
    free((*p)[i].name);
    free((*p)[i].phonenumber);
  }
  free(*p);
  *p = p_aux;
}

void sort(phone* p, int size) {
  char name_aux[STRING];
  char phonenumber_aux[STRING];
  for (int i = 0; i < size - 1; i++) {
    for (int j = i + 1; j < size; j++) {
      if (strcmp(p[i].name, p[j].name) > 0) {
        strcpy(name_aux, p[i].name);
        strcpy(phonenumber_aux, p[i].phonenumber);
        strcpy(p[i].name, p[j].name);
        strcpy(p[i].phonenumber, p[j].phonenumber);
        strcpy(p[j].name, name_aux);
        strcpy(p[j].phonenumber, phonenumber_aux);
      }
    }
  }
}