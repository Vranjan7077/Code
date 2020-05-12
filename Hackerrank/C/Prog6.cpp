/*
Digit Frequency
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{  
unsigned int i=0,j=0,count=0;
char s[1000];
char *s_dup;
unsigned int a[10];
scanf("%s",s);
for(i=0;i<10;i++)
{ 
  count=0;
  s_dup=s;
  for (j = 0; j < strlen(s); j++)
  {
    if ((i+'0')==(*s_dup))
    {
      count++;
    }
    s_dup++;
  }
    a[i]=count;
}
for(i=0;i<10;i++)
printf("%u ",a[i]);
return 0;
}

