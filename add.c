// function with call by value and return type
#include<stdio.h>
int add();// forward declaration;
void sub();

int main()
{
  int a,b;
  printf("\n enter 2 numbers");
  scanf("%d%d",&a,&b);
  int result = add( a, b);//function call and return type an call by value
  printf(" \n the sum of 2 numbers is %d",result);
  sub(a,b);// function call

}
int add(int m, int n)// function declaration
{


  int sum = m+n;

  return sum;
}
void sub(int m, int n)// function declaration
{

  int subtraction = m-n;// storage variable
 printf("\n  the difference is %d",subtraction);

  }
