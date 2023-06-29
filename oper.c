#include <stdio.h>

int main() {
  int num1,num2,exp=1;
  int sum,difference,product,remainder, qoutient,exponent;
  printf("Enter any two numbers:");
  scanf("%d%d",&num1,&num2);
  sum=num1+num2;
  difference=num1-num2;
  product=num1*num2;
  qoutient=num1/num2;
  remainder=num1%num2;
  exponent=
  printf("sum=%d\n",sum);
  printf("difference=%d\n",difference);
  printf("product=%d\n",product);
  printf("qoutient=%d\n",qoutient);
  printf("remainder=%d\n",remainder);
  for(int i=0;i<num2;i++)
    {
        exp*=num1;
    }
    printf("exponent=%d\n",exp);
  
  return 0;
}
