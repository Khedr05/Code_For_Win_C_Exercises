/*
 ============================================================================
 Name        : Perform_Input_Output_Of_All_Basic_Data_Types.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	 char charVar;
	 unsigned char uCharVar;

	 short shortVar;
	 unsigned short uShortVar;

	 int intVar;
	 unsigned int uIntVar;

	 long int longIntVar;
	 unsigned long int uLongIntVar;

	 long long int longLongIntVar;
	 unsigned long long int uLongLongIntVar;

	 float floatVar;
	 double doubleVar;
	 long double longDoubleVar;


	 printf("Enter Char\n");
	 fflush(stdout); fflush(stdin);
	 scanf("%c",&charVar);

	 printf("Enter Unsigned Char\n");
	 fflush(stdout); fflush(stdin);
	 scanf("%c",&uCharVar);

	 printf("Enter Short Number\n");
	 fflush(stdout); fflush(stdin);
	 scanf("%hi",&shortVar);

	 printf("Enter Unsigned Short Number\n");
	 fflush(stdout); fflush(stdin);
	 scanf("%hu",&uShortVar);

	 printf("Enter Integer Number\n");
	 fflush(stdout); fflush(stdin);
	 scanf("%d",&intVar);

	 printf("Enter Unsigned Integer Number\n");
	 fflush(stdout); fflush(stdin);
	 scanf("%i",&uIntVar);

	 printf("Enter Long Integer Number\n");
	 fflush(stdout); fflush(stdin);
	 scanf("%ld",&longIntVar);

	 printf("Enter Unsigned Long Integer Number\n");
	 fflush(stdout); fflush(stdin);
	 scanf("%lu",&uLongIntVar);

	 printf("Enter Long Long Integer Number\n");
	 fflush(stdout); fflush(stdin);
	 scanf("%lld",&longLongIntVar);

	 printf("Enter Unsigned Long Long Integer Number\n");
	 fflush(stdout); fflush(stdin);
	 scanf("%llu",&uLongLongIntVar);

	 printf("Enter Float Number\n");
	 fflush(stdout); fflush(stdin);
	 scanf("%f",&floatVar);

	 printf("Enter Double Number\n");
	 fflush(stdout); fflush(stdin);
	 scanf("%lf",&doubleVar);

	 printf("Enter Long Double Number\n");
	 fflush(stdout); fflush(stdin);
	 scanf("%Lf",&longDoubleVar);


		 printf("Enter Char %c\n",charVar);
		 fflush(stdout);

		 printf("Enter Unsigned Char %c\n",uCharVar);
		 fflush(stdout);

		 printf("Enter Unsigned Char\n");
		 fflush(stdout);

		 printf("Enter Short Number %hi\n",&shortVar);
		 fflush(stdout);

		 printf("Enter Unsigned Short Number %hu\n",&uShortVar);
		 fflush(stdout);

	     printf("Enter Integer Number %d\n",intVar);
		 fflush(stdout);

		 printf("Enter Unsigned Integer Number %i\n",uIntVar);
		 fflush(stdout);

		 printf("Enter Long Integer Number %ld\n",longIntVar);
		 fflush(stdout);

		 printf("Enter Unsigned Long Integer Number %lu\n",uLongIntVar);
		 fflush(stdout);

		 printf("Enter Long Long Integer Number %lld\n",longLongIntVar);
		 fflush(stdout);

		 printf("Enter Unsigned Long Long Integer Number %llu\n",uLongLongIntVar);
		 fflush(stdout);

		 printf("Enter Float Number %f\n",floatVar);
		 fflush(stdout);

		 printf("Enter Double Number %lf\n",doubleVar);
		 fflush(stdout);

		 printf("Enter Long Double Number %Lf\n",longDoubleVar);
		 fflush(stdout);

}
