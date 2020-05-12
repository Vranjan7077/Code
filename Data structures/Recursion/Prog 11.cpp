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
#include <iostream> 
using namespace std; 
string replacePi(string input) 
{ 
    string output; 
    int size = input.length(); 
    for (int i = 0; i < size; ++i) { 
        if (i + 1 < size and input[i] == 'p' and input[i + 1] == 'i') { 
            output += "3.14"; 
            i++; 
        }  
        else { 
            output += input[i]; 
        } 
    } 
    return output; 
} 
int main() 
{ 
    string input;
	cin>>input; 
    cout << replacePi(input); 
    return 0; 
} 
