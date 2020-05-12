/*
Trim Spaces
Given an input string S that contains multiple words, you need to remove all the spaces present in the input string.
There can be multiple spaces present after any word.
Input Format :  String S
Output Format : Updated string
Constraints : 1 <= Length of string S <= 10^6
Sample Input : abc def g hi
Sample Output : abcdefghi
*/

void trimSpaces(char input[]) {
  
    int len=0,n=0; 
    for(int i=0; input[i]!='\0'; i++)
    {
                len++;
        if(input[i]!=' ')
            n++;
    }
  int temp;
    int i=0; 
    while(i<n)
      {  if(input[i]==' ')
           {     input[i]=temp;
                 for(int j=i; j<len-1; j++)
                  {   
                     input[j]=input[j+1];
                    }
               input[len-1]=temp;
                if(input[i]!=' ')
                      i++;  
            }
       else 
           i++;
     }   
}
