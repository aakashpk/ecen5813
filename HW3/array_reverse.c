/*
Author:Aakash Kumar
compiler used gcc
*/

#include<stdio.h>
#define TWO 2
#define ONE 1

char reverse(char * str,int length)
{
  char temp; // temp variable of swapping characters
  int lim=length-ONE;

  if(!str)  // Checking for NULL pointer
  {
    printf("\nNull pointer passed\n");
    return '1';
  }
  else if (sizeof(*str)!=1)
  {
    printf("\nWrong Data Type Passed\n");
    return '2';
  }
  else if (*(str+length)!='\0')
  {
    printf("\nWrong Length Passed\n");
    return '3';
  }
  else
  {
    // Starting from start of string swap first and last elements
    // and move inwards swapping till the middle
    for(int i=0;i<length/TWO;i++)
    {
      temp=*(str+i);
      *(str+i)=*(str+lim-i);
      *(str+lim-i)=temp;
    }
    return 0;
  }
}

void main()
{
  char y[]={"This is a string"};
  char z[]={"some NUMmbers12345"};
  char u[]={"Does it reverse \n\0\t correctly?"};
  int size1= sizeof(y)/sizeof(char);
  int size2= sizeof(z)/sizeof(char);
  int size3= sizeof(u)/sizeof(char);

 // Case 1 passing first string, showing both input string and result of running function
  printf("Case1\n");
  for(int i=0;i<size1;i++) printf("%c",*(y+i));

  int out1=reverse(&y,17);

  if(out1==0)
  {
  printf("\nReversed:\n");
  for(int i=0;i<size1;i++) printf("%c",*(y+i));
  }

// Case 2 passing second string, showing both input string and result of running function
  printf("\nCase2\n");
  for(int i=0;i<size2;i++) printf("%c",*(z+i));

  int out2=reverse(&z,18);

  if(out2==0)
  {
  printf("\nReversed:\n");
  for(int i=0;i<size2;i++) printf("%c",*(z+i));
  }

// Case 3 passing third string, showing both input string and result of running function
  printf("\n\nCase3\n");
  for(int i=0;i<size3;i++) printf("%c",*(u+i));

  int out3=reverse(&u,30);

  if(out3==0)
  {
  printf("\nReversed:\n");
  for(int i=0;i<size3;i++) printf("%c",*(u+i));
  }


}
