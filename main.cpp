#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
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
        case 4: {
            float x1;
            float x2;
            float y1;
            float y2;
            float ab;
            
            scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
            ab = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
            printf("%f",ab);
        }
        case 5: {
            float r;
            float l;
            
            scanf("%f",&r);
            l = 2*r*M_PI;
            printf("%f",l);
        }
        case 6: {
            float a;
            float b;
            float c;
            float p;
            float s;    const float pi = 3.14;
            
            scanf("%f%f%f",&a,&b,&c);
            p = (a+b+c)/2;
            s = sqrt(p*(p-a)*(p-b)*(p-c));
            printf("%f",s);
        }
        case 7: {
            int n;
            float s;
            
            scanf("%d",&n);
            s = (float)(n*(n+1)*(2*n+1))/6;
            printf("%f",s);
        }
        case 8: {
            float r;
            float g;
            
            scanf("%f",&g);
            r = g*M_PI/180;
            printf("%f",r);
        }
        case 9: {
            float r;
            float g;
            
            scanf("%f",&r);
            g = 180*r/M_PI;
            printf("%f",g);
        }
        case 10: {
            float a;
            float b;
            float h;
            float s;
            
            scanf("%f%f%f",&a,&b,&h);
            s = (a+b)*h/2;
            printf("%f",s);
        }
        case 11: {
            float m;
            float d;
            
            scanf("%f",&m);
            d = m/25.4;
            printf("%f",d);
        }
        case 12: {
            float m;
            float d;
            
            scanf("%f",&d);
            m = 0.0254*d;
            printf("%f",m);
        }
        case 13: {
            float a;
            float b;
            float c;
            float r;
            float s;
            
            scanf("%f%f%f%f",&a,&b,&c,&r);
            s = (a+b+c)*r/2;
            printf("%f",s);
        }
        case 14: {
            float u;
            float r1;
            float r2;
            float i;
            
            scanf("%f%f%f",&u,&r1,&r2);
            i = u*(r1+r2)/(r1*r2);
            printf("%f",i);
        }
        case 15: {
            float v;
            float s0;
            float s;
            float t;
            
            scanf("%f%f%f",&s0,&s,&t);
            v = (s-s0)/t;
            printf("%f",v);
        }
        case 16: {
            float a;
            float b;
            float c;
            float r;
            float s;
            
            scanf("%f%f%f%f",&a,&b,&c,&r);
            s = a*b*c/(4*r);
            printf("%f",s);
        }
        case 17: {
            int n;
            float s;
            
            scanf("%d",&n);
            s = (float)(n*n*pow((n*n+1),2))/4;
            printf("%f",s);
        }
        case 18: {
            float a1;
            float a2;
            float a3;
            float ma;
            
            scanf("%f%f%f",&a1,&a2,&a3);
            ma = (a1+a2+a3)/3;
            printf("%f",ma);
        }
        case 19: {
            int n;
            float s;
            
            scanf("%d",&n);
            s = (float)(n*(n+1))/2;
            printf("%f",s);
        }
        case 20: {
            float r;
            float s;
            
            scanf("%f",&r);
            s = M_PI*r*r;
            printf("%f",s);
        }
        case 21: {
            int n;
            float r;
            float p;
            
            scanf("%d%f",&n,&r);
            p = (float)2*n*r*sin((float)M_PI/n);
            printf("%f",p);
        }
        case 22: {
            float a1;
            float a2;
            float a3;
            float a4;
            float a5;
            float mq;
            
            scanf("%f%f%f%f%f",&a1,&a2,&a3,&a4,&a5);
            mq = sqrt((a1+a2+a3+a4+a5)/5);
            printf("%f",mq);
        }
        case 23: {
            float x1;
            float x2;
            float y1;
            float y2;
            float x;
            float y;
            
            scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
            x = (x1+x2)/2;
            y = (y1+y2)/2;
            printf("%f %f",x,y);
        }
        case 24: {
            int n;
            float a1;
            float an;
            float d;
            
            scanf("%d%f%f",&n,&a1,&d);
            an = a1+(float)(n-1)/d;
            printf("%f",an);
        }
        default: 
            printf("Номер некорректен");
            break;
    }    
    return EXIT_SUCCESS;
}






























