/*  String Length Counting.  */

#include<stdio.h>

int main()
{

  char str[20];

  int i;

  printf("Enter value: ");
  scanf("%[^\n]s",&str);

	for(i=0; str[i]!='\0'; i++)
	{
		printf("char is : %c\n",str[i]);
	}
	
	printf("Length is : %d",i);

  return 0;

}

/*
     
Enter value: HIMANGI
char is : H
char is : I
char is : M
char is : A
char is : N
char is : G
char is : I
Length is : 7
*/