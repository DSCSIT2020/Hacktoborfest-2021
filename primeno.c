#include <stdio.h>
 
int main()
{
  int i, Number, count, Minimum, Maximum; 

  printf("\n Please Enter the Minimum & Maximum Values\n");
  scanf("%d %d", &Minimum, &Maximum);
 
  printf("Prime Numbers Between %d and %d are:\n", Minimum, Maximum);  
  for(Number = Minimum; Number <= Maximum; Number++)
  {
    count = 0;
    for (i = 2; i <= Number/2; i++)
    {
      if(Number%i == 0)
      {
  	count++;
  	break;
      }
    }
    if(count == 0 && Number != 1 )
    {
       printf(" %d ", Number);
    }  
  }
  return 0;
  }
