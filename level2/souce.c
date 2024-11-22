#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void no(void)
{
  puts("Nope.");
  exit(1);
}

void ok(void)
{
  puts("Good job.");
  return;
}

int main(void)
{
  uint uVar1;
  size_t translen;
  int tmpint;
  bool bVar4;
  char buffer[4];
  char inputter[24];
  char transfer[9];
  uint i;
  int j;
  int scanlen;

  printf("Please enter key: ");
  scanlen = scanf("%s",inputter);
  if (scanlen != 1) {
    no();
  }
  if (inputter[1] != '0') {
    no();
  }
  if (inputter[0] != '0') {
    no();
  }
  fflush(stdin);
  memset(transfer,0,9);
  transfer[0] = 'd';
  buffer[3] = 0;
  i = 2;
  j = 1;
  while( true ) {
    translen = strlen(transfer);
    uVar1 = i;
    bVar4 = false;
    if (translen < 8) {
      translen = strlen(inputter);
      bVar4 = uVar1 < translen;
    }
    if (!bVar4) break;
    buffer[0] = inputter[i];
    buffer[1] = inputter[i + 1];
    buffer[2] = inputter[i + 2];
    tmpint = atoi(&buffer[0]);
    transfer[j] = (char)tmpint;
    i = i + 3;
    j = j + 1;
  }
  transfer[j] = '\0';
  tmpint = strcmp(transfer,"delabere");
  if (tmpint == 0) {
    ok();
  }
  else {
    no();
  }
  return 0;
}



