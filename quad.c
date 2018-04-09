#include <stdio.h>
#include<stdlib.h>
#include<math.h>
struct quad
{
  float imaginary;
  float real;
} ;

int quad(float imaginary,float real )
{
   int a,b,c;
   float d;
   struct quad s;
  printf ("enter the values of a , b , c :\n");
  scanf ("%d%d%d", &a, &b, &c);
  d = ((b * b) - (4 * a * c));
  if (d > 0)
    {
      printf ("roots are distinct and real: d=%f", d);
      s.real = (-b + sqrt (d)) / (2 * a);
      s.imaginary = (-b - sqrt (d)) / (2 * a);
      printf ("two roots are:%f+i %f", s.real, s.imaginary);
    }
  else if (d == 0)
    {
      printf ("roots are equal:d=%f", d);
      s.real = (-b / (2 * a));
      printf ("roots are:%f", s.real);
    }
  else if (d < 0)
    {
      printf ("\nroots are complex  number d=%f", d);
      s.real = (-b + sqrt (d)) / (2 * a);
      s.imaginary = (-b - sqrt (d)) / (2 * a);
      printf ("\nreal part and imaginary part  %f+ i%f ", s.real,s.imaginary);
    }
    return (imaginary,real);
}

int main ()
{
    
    s.real;
    s.imaginary;
    quad(imaginary,real);
printf("the result is :%f+i%f",s.real,s.imaginary);
}
