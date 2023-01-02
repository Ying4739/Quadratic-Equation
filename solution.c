#include <math.h>
#include <stdio.h>

int main()
{
    float a, b, c, d, e, f;
    printf("input coefficient a, b, c予 ax^2 + bx + c = 0\n");
    scanf("%f %f %f", &a, &b, &c);
    d = sqrt ((b*b)-(4*a*c));
    if(d>=0){
      e = (-b+d)/(2*a);
      f = (-b-d)/(2*a);
      if(e==f){
      printf("repeated root %f \n" , e);
          
      }
      else{
      printf("roots are %f, %f \n", e, f);
          
      }
     }
    else{
        printf("imaginary root= %f +- %fi \n", -b/(2*a), sqrt (-((b*b)-(4*a*c)))/(2*a));
    }

    return 0;
}
