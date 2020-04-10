/*#include<stdio.h> 

// Value of 'a' can be accessed/modified either 
// through 'a' or through 'b' 
int  a = 5; 
int *b = &a; 

int func( double* restrict b) 
{ 
	a = 1; 
	printf("%p %p %p %d\n",b,&b,&a,a);
	// The below statement modifies 'a' 
	*b = 1234.56;
	//printf("%p %d\n",b,*c);
	//printf("%d\n",a);
	return (a); 
} 

int main() 
{ 
	printf("%d\n",a);
	printf("%d\n", func((double*)&a)); 

	printf("%d",a);
	return 0; 
} 
*/



#include <stdio.h>
#include<stdlib.h>
int main(void) {

     char * p = (char*)malloc(10);

     strcpy(p, "trouble");

     printf("%s\n", p);}
