#include <stdio.h>
#include <cstdlib>
#include <time.h>
#include <iostream>

using namespace std;


char **charSquare(int n);
void drawCharSquare(char **square, int n);

int main(int argc, char **argv)
{
	if(argc < 3) 
		{ 
			cout << "wrong number of arguments";
			return 0;
		}

int b = atoi(argv[2]);
srand(b);


int  n = atoi(argv[1]) ;
drawCharSquare(charSquare(n), n);

}

char **charSquare(int n)
{

	static char **square;

	square = new char*[n];

	for(int i = 0; i<n ; ++i)
	{
		square[i] = new char[n];
	}

	for(int i = 0; i < n*n ; ++i)
	{
		square[i/n][i%n] = ((rand() % 26) + 97);
		
	}


	return square;
}

void drawCharSquare(char **square, int n)
{

	for(int i = 0; i < n*n ; ++i)
	{
		i%n==n-1?cout<<square[i/n][i%n]<<endl:cout<<square[i/n][i%n]<<" ";
	}
	

}


//deded