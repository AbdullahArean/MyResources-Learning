#include<stdio.h>

int main()
{
    int num;
    FILE *ptr;
    ptr= fopen("/home/arean1/Desktop/munir2.txt","w");

   //printf("%c\n",*(ptr+2));
    fprintf(ptr,"%s","my name is munir, ami khai ponir");
   //printf("Value of n=%d", num);
   
    fclose(ptr);
}