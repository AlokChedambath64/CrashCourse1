#include <stdio.h>

int main()
{
  char ch = 'A';
  
  for (int i = 0; i < 6; i++)
  {
    for (int j = 0; j < i; i++)
    {
      printf("%c", ch);
      ch++;
    }
    printf("\n");
  }
}
