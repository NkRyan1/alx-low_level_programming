#include<stdio.h>
#include<math.h>

/**
 *
 * main - finding the greatest prime factor of a number
 *
 * Return: 0
 */

int getMaxPrimeFactor(int n) 
{

	      int i, max = -1;

	      while(n % 2 == 0) 
	      {

	            max = 2;
		    n = n / 2; //reduce n by dividing this by 2

	      }

	      for(i = 3; i <= sqrt(n); i=i+2)
	      {
		      while(n % i == 0) 
		      {
		              max = i;
			      n = n / i;
		      }
	      }
              if(n > 2)
	      {
		      max = n;
 	      }
	      return max;

}

int main()
{

	int n;

	n = getMaxPrimeFactor(612852475143);

	printf("Max prime factor: %d", n);

	return (0);

}
