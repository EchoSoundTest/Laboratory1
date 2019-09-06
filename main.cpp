#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    const float pi = 3.14;
    int Num;
    printf("Введите номер задания: ");
    scanf("%d",&Num);
    switch(Num) {
        case 1: {
            int n;
            float d;
            float a1;
            float s;
  
            scanf("%d%f%f",&n,&d,&a1);
            s = (float)n/2*(2*a1+(n-1)*d);
            printf("%f", s);
            break;
        }
        case 2: {
            int n;
            float a1;
            float an;
            float s;
            
            scanf("%d%f%f",&n,&a1,&an);
            s = (float)n/2*(a1+an);
            printf("%f",s);
            break;
        }
        case 3: {
            int n;
            float r;
            float s;
            
            scanf("%d%f",&n,&r);
            s = (float)n*r*r*sin(2*M_PI/n)/2;
            printf("%f",s);
            break;
        }
    }    
    return EXIT_SUCCESS;
}
