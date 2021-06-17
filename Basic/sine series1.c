#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    double series[7] = {2.619048, 2.994187, 1.026918, 0.167716, 0.015978, 0.000996,0.000141};

    double sum=0.0, num;
    for (int i=0;i<7;i++)
    {
        if (i%2==0)
        {
            num = series[i];
            sum += num;
            printf("%lf\n",sum);
        }
        else
        {
            num = series[i];
            sum -= num;
            printf("%lf\n",sum);
        }
    }

    float a = floor(10000*sum)/10000;

    printf("%.4f",a);
}
