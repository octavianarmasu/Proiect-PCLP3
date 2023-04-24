#include "phone.h"

void add(phone* p, char* name, char* phonenumber, int size) {
  int len_name = strlen(name);

  int len_phonenumber = strlen(phonenumber);

  p[size].name = malloc(len_name * sizeof(char));
  p[size].phonenumber = malloc(len_phonenumber * sizeof(char));
  p[size].name = name;
  p[size].phonenumber = phonenumber;
}