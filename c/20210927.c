#include <stdio.h>

int sum(int);

 

int main(void)
{ /*Sum from 1 to variable i */

  int i = 10;

  printf("The answer of adding from 1 to %d is %d\n", i, sum(i));

  return 0;
}

int sum(int j)
{  /* self-recursive function */

    if (j == 1)
    {
        return 1;
    }
    else
    {
        return j + sum(j - 1);
    }
  

}