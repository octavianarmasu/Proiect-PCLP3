#pragma once
#include <inttypes.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct phone phone;
struct phone {
  char* name;
  char* phonenumber;
};

void add(phone* p, char* name, char* phonenumber, int size);