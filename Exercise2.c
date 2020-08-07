/*
2. Input n strings from keyboard and sort them ascendingly.
Ex:
 _________________________________________
| Input: n = 3, strings: "one two three"  |
| Output: "one three two"                 |
|_________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>

int ex2(int n, char *str[]){
	char name[25][50],temp[25];
  int n,i,j;
	for(i=0;i<=n;i++)
  {
       
       fgets(name[i], sizeof name, stdin);
  }
    for(i=1;i<=n;i++)
	for(j=0;j<=n-i;j++)
	if(strcmp(name[j],name[j+1])>0)
	{   
		strcpy(temp,name[j]);
		strcpy(name[j],name[j+1]);
	    strcpy(name[j+1],temp);
	}
	for(i=0;i<=n;i++){
		printf("%s\n",name[i]);}
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int n = atoi(argv[1]);
	char *str[n];
	int i;
	for(i=0; i<n; i++){
		str[i] = argv[i+2];
	}

	ex2(n, str);
		
	return 0;
}
