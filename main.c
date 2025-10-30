#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  int testScore[5];
  int i;
  
  testScore[0] = 10;
  testScore[1] = 20;
  testScore[2] = 30;
  testScore[3] = 40;
  testScore[4] = 50;
  
  for(i=0;i<5;i++)
                  printf("grade[%i} = %i\n", i, testScore[i]);
  
  system("PAUSE");	
  return 0;
}
