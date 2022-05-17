#include <stdio.h>
#include <math.h>

int main() {
  int i;
  double j, S = 0.0;

    

    for (i = 0; i <= 10000000; i++){
      if(i%2==0)
      j = 1.0;
      else
      j = -1.0;

      S = S + j / ( 2 * i + 1 );
  }

  printf("S =   %f \n", S);



  printf("π/4 = %f \n", 3.141592653589/4);

  return(0);

}