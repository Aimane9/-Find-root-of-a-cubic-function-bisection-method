#include<stdio.h>
#include<math.h>
#define TOL 0.0001


float func(double x , double a, double b,double c, double d)
{
return (a*pow(x,3)+ b*pow(x,2)+ c*x+d);
}

int main()
{   
    double a,b,c,d;
    double l,u;
    int iteration=10,i;
printf("Enter the coefficients in the form “a b c d”: ") ;
scanf("%lf \t %lf \t %lf \t %lf",&a,&b,&c,&d);
printf("Root finding of function %0.lf x^3+%0.lf x^2+%0.lf x+%0.lf using bisection method.\n",a,b,c,d);
printf("Enter the first approximation of the root:\n");
scanf("%lf",&l);

printf("Enter the second approximation of the root:\n");
scanf("%lf",&u);


i=1;
double a1=l;
double b1=u;
double root,f1,f2,f3;
if(func(a1,a,b,c,d)==0)
    root=a1;
else if(func(b1,a,b,c,d)==0)
    root=b1;
else{
while(i<iteration)
{
    root=(a1+b1)/2;

f1=func(a1,a,b,c,d);
f2=func(root,a,b,c,d);
f3=func(b1,a,b,c,d);
if(f2==0)
{
    root=f2;
    break;
}
printf("The root after %d iteration is %lf\n",i,root);
if(f1*f2<0)
b1=root;
else
    if(f2*f3<0)
    a1=root;
i++;
}
}
printf("The approximation of the root is %0.lf",root);
    return 0;
}
