#include <stdio.h>
int main()
{
    int total = 0;
    int count = 100;
        for (int i = 0; i<= count; i++)
    {
        if (i%2 != 0)
        {
           printf("IMPAR %d\n",i);
           total = total + i;
        }
      printf("total %d\n",total);  
    }
    printf("total final %d\n",total); 
    return 0;
}
