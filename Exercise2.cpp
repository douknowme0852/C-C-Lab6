/*
2. Input an array of integers, return indices of the two numbers such that
they add up to a specific target. You may not use the same element twice.
Ex:
______________________________________
| Input: [2, 7, 11, 15] target = 9   |
| Output: 0 1                        |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>

int ex2(int target, int n, int arr[]){
	//your codes here
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int target = atoi(argv[1]);
	int arrl = argc - 2;
	int testcase[arrl];
	int i;
	for(i=0; i<arrl; i++){
		testcase[i] = atoi(argv[i+2]);
	}

	ex2(target, 4, testcase);
		
	return 0;
}