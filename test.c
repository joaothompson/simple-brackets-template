#include <student.h>
#include <stdio.h>

int main(void)
{
  char str[129];
  int total;
  scanf("%s", str);
  total = simple_parentheses(str);
  printf("%d\n", total);
  return 0;
}
