#include <stdio.h>
#include <string.h>

int main (int argc, char **argv) {

  const int RV__FILENAME    = 1;
  const int RV__FILE_HANDLE = 2;


  char *prefix = 0;
  char *filename = 0;
  FILE *file_handle = 0;

  if (argc >= 2) prefix = argv[1];


  filename = tempnam(0, prefix);
  if (!filename || !strlen(filename)) return RV__FILENAME;

  file_handle = fopen(filename, "w");
  if (!file_handle) return RV__FILE_HANDLE;
  fclose(file_handle);

  puts(filename);
  return 0;

} // int main (...)