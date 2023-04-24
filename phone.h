#pragma once
#include <inttypes.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STRING 128

typedef struct phone phone;
struct phone {
  char* name;
  char* phonenumber;
};

void add(phone* p, char* name, char* phonenumber, int size);
void print(phone* p, int size);
void show(phone* p, char* name, int size);
int verify(phone* p, char* name, int size);
void delete(phone** p, char* name, int size);
void sort(phone* p, int size);