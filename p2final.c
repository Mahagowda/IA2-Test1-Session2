#include<stdio.h>
int input_side()
{
  int n;
  scanf("%d", &n);
  return n;
}
int check_scalene(int a,int b,int c)
{
  if(a!=b&&a!=c&&b!=c)
  {
   return 1; 
  }
  return 0;
}
void output(int a,int b,int c, int isscalene)
{
  if(is scalene==0)
}
  printf("the triangle with side %d,%d and %d is scalene\n",a,b,c);
}
  else
{
  printf("the triangle with sides %d,%d and %d is not scalene\n",a,b,c);
}
}
int main()
{
  float a,b,c,isscalene;
  printf("enter 3 numbers\n");
  a=input_side();
  b=input_side();
  c=input_side();
  isscalene=check_scalene(a,b,c);
  output(a,b,c,isscalene);
  return 0;
}