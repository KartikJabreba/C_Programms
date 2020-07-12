#include<stdio.h>
int average(int val[],int size)
{
    int i,sum=0;
    float avg;
    for(i=0;i<size;i++)
    {
        sum+=val[i];
    }
    avg=sum/size;
    return avg;

}

int main()
{
    int bal[5]={12,13,14,15,16},avg;
    avg= average(bal,5);
    printf("Average value=%d", avg);
    return 0;

}



