1ecp
====

repositorio de apps da facul

Não sei dar push, coloquei o código do organizador do Array aki https://gist.github.com/4017422

e deixo o código aqui em baixo, 












/*
Fill an array with random numbers
Print the array
Find the smallest number and switch places with position [0]
Find the second smallest number and switch places with position [1]
So forth until the array is organized
Print the array
*/

#include <stdio.h>
#include <stdlib.h>

int randomNum(int, int); //after using srand() returns random number between (int,int)

int main(int argc, char *argv[])
{

  srand( time(NULL) );  //further information about the function:	http://stackoverflow.com/questions/3539398/how-does-rand-work-does-it-have-certain-tendencies-is-there-something-better
	
	int randomArray[10];
	int foo, foo2;
	int smallestNum, currentNum;
	int switchPosition;
	
	
	for(foo = 0;foo < 10; foo++)
	{
		randomArray[foo] = randomNum(0,25); //fills array with random numbers
		printf("%d\t", randomArray[foo]);  //prints array 
	}
	
	
	for(foo = 0;foo < 10; foo++) //sorts array
	{
	currentNum = randomArray[foo];
	smallestNum = randomArray[foo];
	switchPosition = foo;
		for(foo2 = foo;foo2 < 9; foo2++)
		{
			if(smallestNum > randomArray[foo2+1])
			{
				smallestNum = randomArray[foo2+1];
				switchPosition = foo2+1;
			}
		}
	randomArray[switchPosition] = currentNum;
	randomArray[foo] = smallestNum;
	}


	
	for(foo = 0;foo < 10; foo++)
	{
		printf("%d\t", randomArray[foo]);  //prints array 
	}

	
    return 0;
}

int randomNum(int min, int max) //returns random number between (MIN,MAX) - dont forget to use srand() before using this. 
{     
    int div = (max - min)+1;
    int num = (rand()%div)+min;  
    return num;  
}