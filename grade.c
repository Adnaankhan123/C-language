#include<stdio.h>
int main(int argc, char const *argv[])
{
  float s1, s2, s3, s4, s5, t, p;
  
  printf("Enter the marks of student in subject 1: ");
  scanf("%f", &s1);
  printf("Enter the marks of student in subject 2: ");
  scanf("%f", &s2);

  printf("Enter the marks of student in subject 3: ");
  scanf("%f", &s3);

  printf("Enter the marks of student in subject 4: ");
  scanf("%f", &s4);

  printf("Enter the marks of student in subject 5: ");
  scanf("%f", &s5);
   
  t = s1+s2+s3+s4+s5;
  printf("total number is = %f\n", t);

  p = t/5;
  printf("percentage = %f \n",p);

    if (p>=90)
    {
        printf("your grade is A+");
    }
    else if (p>=80)
    {
        printf("your grade is A");
    }
    else if (p>=60)
    {
        printf("your grade is B");
    }
    else if (p>=40)
    {
        printf("your grade is C");
    }
    else
    {
        printf("fail");
    }
    return 0;
}
