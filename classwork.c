#include<stdio.h>
//decelaration 
void namaste();
void bonjour();

int main()
{
  char n;
  printf("Enter I for Indian and F for French\n");
  scanf("%c",& n);
  if(n=='I')
  {
    namaste();
  }
  else
  {
    bonjour();
  }
}

void namaste()
{
  printf("Namaste bhau\n");
}
void bonjour()
{
  printf("Bonjour Firangi\n");
}

