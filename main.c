#include <stdio.h>
#include <stdlib.h>

void triR(void)
{
    int size, repeat;

    scanf("%d %d", &size, &repeat);
    printf("Hello world\n");

    for(int c=1; c<=repeat; ++c)
        {
     for(int b=0; b<=size; ++b)
     {
         for (int a=1; a<=b; ++a)
         {
                 printf("%d", b);
         }
         printf("\n");
     }
     for(int k=size-1; k>0; --k)
     {
         for (int i=1; i<=k; ++i)
         {
             printf("%d", k);
         }
         printf("\n");
     }
    }
printf("Bye world\n");
}

void triL(void)
{
    int size, repeat;

    scanf("%d %d", &size, &repeat);
    printf("Hello world\n");

      for(int c=1; c<=repeat; ++c)
        {
     for(int b=0; b<=size; ++b)
     {
         for (int a=size-b; a>0; --a)
         {
                 printf(".");
         }
         for(int a=1;a<=b;++a)
         {
               printf("%d",b);
         }
         printf("\n");
     }

     for(int k=size-1; k>0; --k)
     {
         for(int i=1; i<=size-k; ++i)
         {
             printf(".");
         }
         for(int i=k; i > 0; --i)
         {
             printf("%d",k);
         }
        printf("\n");
     }
    }
printf("Bye world\n");
}

void dias(void)
{
    int size, repeat;

    scanf("%d %d", &size, &repeat);
    printf("Hello world\n");

      for(int c=1; c<=repeat; ++c)
        {
     for(int b=0; b<=size; ++b)
     {
         for (int a=size-b; a>0; --a)
         {
                 printf(".");
         }
         for(int a=1;a<=b;++a)
         {
               printf("%d%d",b,b);
         }
         printf("\n");
     }

     for(int k=size-1; k>0; --k)
     {
         for(int i=1; i<=size-k; ++i)
         {
             printf(".");
         }
         for(int i=k; i > 0; --i)
         {
             printf("%d%d",k,k);
         }
        printf("\n");
     }
    }
printf("Bye world\n");
}

int main(void)
{
  int n;
  scanf("%d", &n); // 1,2,3 중 하나를 입력받는다
  switch (n)
  {
    case 1: triR(); break;
    case 2: triL(); break;
    case 3: dias(); break;
    default: return -1;
  }
  return 0;
}
