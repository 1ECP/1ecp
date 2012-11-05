1ecp
====

repositorio de apps da facul

Não sei dar push, coloquei o código do organizador do Array aki https://gist.github.com/4017422

e deixo o código aqui em baixo, 

**incluido parte para busca binaria












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
		
		//select a random element from the array, store it and print it. 
		int randomElement = randomArray[randomNum(0,10)];
		printf("\n");
		printf("The element is %d", randomElement);
		printf("\n\n");
		
		//sorts array
		for(foo = 0;foo < 10; foo++) 
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
		//prints array 
		for(foo = 0;foo < 10; foo++)
		{
			printf("%d\t", randomArray[foo]);  
		}
		printf("\n\n");
		
		//attempt to find element within array using binary search
		int arraySearchMin = 0;
		int arraySearchMax = 10;
		int currentArrayPosition = 0;
		int foundElement = 0;
		
		while(foundElement == 0)
		{
			currentArrayPosition = (arraySearchMax + arraySearchMin)/2;
			if(randomArray[currentArrayPosition] > randomElement)
			{
			arraySearchMax = currentArrayPosition;
			}
			if(randomArray[currentArrayPosition] < randomElement)
			{
			arraySearchMin = currentArrayPosition;
			}
			if(randomArray[currentArrayPosition] == randomElement)
			{
			foundElement = 1;
			}
		}
		printf("The element was found at position %d \n", currentArrayPosition);
		printf("Which is %d\n", randomArray[currentArrayPosition]);
		printf("And it must be equal to %d\n", randomElement);
		return 0;
	}

	int randomNum(int min, int max) //returns random number between (MIN,MAX) - dont forget to use srand() before using this. 
	{     
		int div = (max - min)+1;
		int num = (rand()%div)+min;  
		return num;  
	}


