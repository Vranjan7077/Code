/*
Replace pi (recursive)
Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".
Sample Input 1 : xpix
Sample Output : x3.14x
Sample Input 2 : pipi
Sample Output : 3.143.14
Sample Input 3 : pip
Sample Output : 3.14p
*/
#include<cstring>
void replacePi(char input[])
{
    int l=strlen(input);
    int m=l-1;
    if(m<=0)
    {
        return;
    } 
    replacePi(input+1);
    if(input[0]=='p'&&input[1]=='i')
    {
        l=strlen(input);
        for(int i=l;i>=2;i--)
        {
            input[i+2]=input[i];
        }
        input[0]='3';
        input[1]='.';
        input[2]='1';
        input[3]='4';
    }
}
