#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void nope(void)
{
  puts("Nope.");
  exit(1);
}

void good_job(void)
{
  puts("Good job.");
  return;
}

int main(void)
{
  unsigned long reslen;
  int int_val;
  size_t asterlen;
  bool done;
  char transbuf[4];
  char strbuff[31];
  char asterixer[9];
  unsigned long j;
  int cmpres;
  int i;
  int strbuff_len;

  printf("Please enter key: ");
  strbuff_len = scanf("%s", strbuff);
  if (strbuff_len != 1) {
    nope();
  }
  if (strbuff[1] != '2') {
    nope();
  }
  if (strbuff[0] != '4') {
    nope();
  }
  fflush(stdin);
  memset(asterixer,0,9);
  asterixer[0] = '*';
  transbuf[3] = 0;
  j = 2;
  i = 1;

  while( true ) 
  {
    asterlen = strlen(asterixer);
    reslen = j;
    done = false;
    if (asterlen < 8)
    {
      asterlen = strlen(strbuff);
      done = reslen < asterlen;
    }
    if (!done)
      break;
    transbuf[0] = strbuff[j];
    transbuf[1] = strbuff[j + 1];
    transbuf[2] = strbuff[j + 2];
    int_val = atoi(transbuf);
    asterixer[i] = (char)int_val;
    j = j + 3;
    i = i + 1;
  }

  asterixer[i] = '\0';
  cmpres = strcmp(asterixer,"********");
  if (cmpres == -2)
    nope();
  else if (cmpres == -1)
    nope();
  else if (cmpres == 0)
    good_job();
  else if (cmpres == 1)
    nope();
  else if (cmpres == 2)
    nope();
  else if (cmpres == 3)
    nope();
  else if (cmpres == 4)
    nope();
  else if (cmpres == 5)
    nope();
  else if (cmpres == 0x73)
    nope();
  else
    nope();
  return 0;
}
