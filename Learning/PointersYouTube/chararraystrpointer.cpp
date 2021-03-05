#include<stdio.h>
#include<string.h>
void print(char* cp)
{
	//cp[2]='u';
	while(*cp != '\0')
	{
		printf("%c\n", *cp);
		cp++;
	}
}

int main()
{
	//char C[]="Arean";
	//printf("%s\n",C);
	//printf("Size of Array= %ld\n", sizeof(C));
	//printf("String Length = %ld\n", strlen(C));
	//char* cpointer;
	//cpointer =C;
	//it is invalid
	//C= cpointer;
	//printf("%d",cpointer[2]);
	//print(cpointer);


//String Contstant
//If we declare an array through char pointer, it is not possible to modify it
	char* C ="Hello";
	//C[1]='A';
	print(C);
	return 0;
}
