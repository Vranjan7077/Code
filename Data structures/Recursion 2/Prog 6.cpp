/*
Remove X
Given a string, compute recursively a new string where all 'x' chars have been removed.
Sample Input 1 : xaxb
Sample Output 1: ab
Sample Input 2 : abc
Sample Output 2: abc
Sample Input 3 : xx
*/
if(input[0]!='x') copy tmp[0]=input[0]


call(input+1,tmp+1)

if(input[0]=='x')call(input+1,tmp)

base case would be if(input[0]=='\0')tmp[0]='\0'





