#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;
   
	fptr = fopen("C:\\Users\\Student\\Desktop\\data.txt", "r");

   if (fptr== NULL){
       printf("Error! opening file");
   }

   fscanf(fptr,"%d", &num);

   printf("Value of n=%d", num);
   fclose(fptr); 
  
   return 0;
}