#include <stdio.h>
#include <stdlib.h>

#define N_STUDENT 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	int a[N_STUDENT]={1,2,3,4,5};
	int b[N_STUDENT]={1,2,3,4,5};
	

    if (a==b)
      printf("array a and b are the same\n");
    	
	else 
	  printf("array a and b are not the same\n");

    system("PAUSE");
	return 0;
}
