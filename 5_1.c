#include <stdio.h>
#include <math.h>

int main() {
  int i;
  double j, S = 0.0;

    

    for (i = 1; i <= 10000000; i++){
      if(i%2==0)
      j = -1.0;
      else
      j = 1.0;

      S = S + j / i;
  }

  printf("S =      %f \n", S);



  printf("log(2) = %f \n", log(2));

  return(0);

}