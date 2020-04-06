#include <stdio.h>
#include "dynamicString.h"

int main() {

  dynamicString str;
  dyStr_initialize(&str);

  printf("<%s>\n", dyStr_getStr(&str));
  printf("length: %d\n", str.length);
  printf("alloc_size: %d\n", str.alloc_size);

  dyStr_setStr(&str, "Hello");
  printf("<%s>\n", dyStr_getStr(&str));
  printf("length: %d\n", str.length);
  printf("alloc_size: %d\n", str.alloc_size);

  dyStr_setStr(&str, "Hi");
  printf("<%s>\n", dyStr_getStr(&str));
  printf("length: %d\n", dyStr_getLength(&str));
  printf("alloc_size: %d\n", str.alloc_size);

  dyStr_fit(&str);
  printf("<%s>\n", dyStr_getStr(&str));
  printf("length: %d\n", dyStr_getLength(&str));
  printf("alloc_size: %d\n", str.alloc_size);

  dyStr_appendStr(&str, ", my name is Hugh.");
  printf("<%s>\n", dyStr_getStr(&str));
  printf("length: %d\n", dyStr_getLength(&str));
  printf("alloc_size: %d\n", str.alloc_size);

  dyStr_appendStr(&str, " I enjoy making electronic music.");
  printf("<%s>\n", dyStr_getStr(&str));
  printf("length: %d\n", dyStr_getLength(&str));
  printf("alloc_size: %d\n", str.alloc_size);

  dyStr_removePart(&str, 2, 6);
  printf("<%s>\n", dyStr_getStr(&str));
  printf("length: %d\n", dyStr_getLength(&str));
  printf("alloc_size: %d\n", str.alloc_size);

  dyStr_removePart(&str, 0, 90);
  printf("<%s>\n", dyStr_getStr(&str));
  printf("length: %d\n", dyStr_getLength(&str));
  printf("alloc_size: %d\n", str.alloc_size);

  dyStr_fit(&str);
  printf("<%s>\n", dyStr_getStr(&str));
  printf("length: %d\n", dyStr_getLength(&str));
  printf("alloc_size: %d\n", str.alloc_size);

  dyStr_deinitialize(&str);

}
