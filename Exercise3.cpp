/*
3. Input a string and find the smallest and largest word.
Ex:
 __________________________________________________________
| Input: "this is a string with smallest and largest word" |
| Output: "a" "smallest"                                   |
|__________________________________________________________|
*/
#include <stdio.h>
#include <stdlib.h>

int ex3(int n, char *str[]){
	//your codes here
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int n = atoi(argv[1]);
	char *str[n];
	int i;
	for(i=0; i<n; i++){
		str[i] = argv[i+2];
	}

	ex3(n, str);
		
	return 0;
}