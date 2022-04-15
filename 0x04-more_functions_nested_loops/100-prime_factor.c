#include<stdio.h>
#include<math.h>

/**
 *
 * main - finding the greatest prime factor of a number
 *
 * Return: 0
 */

int getMaxPrimeFactor(long int n) 
{

	      int i, max;
		  
	      max = -1;

	      while(n % 2 == 0) 
	      {

	            max = 2;
		    n = n / 2;

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

	long int n;

	n = getMaxPrimeFactor(612852475143);

	printf("%ld\n", n);

	return (0);

}
