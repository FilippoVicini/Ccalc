#include <stdio.h>

int main()
{
  int o1;
  int o2;
  int res;
  char op;
  scanf("%d %c %d", &o1, &op, &o2);
  if (op == '+'){
   res = o1 + o2;
  }
  printf("%d", res);
printf("%c", op);
}
