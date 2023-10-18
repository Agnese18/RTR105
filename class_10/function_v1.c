#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void generet(void);

int main (void)
{
printf(" funk generesana izaukšana: \n");
generet();
printf(" funk generesana 2. izaukšana : \n");
generet(); 
return 0;
}

int flag =1, counter =0;
int grauds;

srand(grauds);
grauds = time(NULL); //kops laika briza 00.00

printf(" laiks sek kopš 00.00 - %d\n", grauds);
while (flag) {

//printf(" i = %d\n" , i++);
counter++;
flag = rand();
}
