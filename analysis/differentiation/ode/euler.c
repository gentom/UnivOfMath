/* WIP */

#include <stdio.h>

double f1(double t,double x,double v)
{
        return v;
}

double f2(double t,double x,double v)
{
        return (-x);
}

int main(void)
{
    double x,v,t,dt,tmax;
    double k0[2];

    //init
    x=1.0;
    v=0.0;
    dt=0.01;
    tmax=100;


    for(t=0.0;t<=tmax;t+=dt) {
        k0[0]=dt*f1(t,x,v);
        k0[1]=dt*f2(t,x,v);
        x=x+k0[0];
        v=v+k0[1];
        printf("%f %f %f\n",t,x,v);
    }

    return 0;
}