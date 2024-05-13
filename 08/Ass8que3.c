#include<stdio.h>

int KMtoMeter(int iNo)
{
    int Meter = 0;
    Meter = iNo * 1000;
    return Meter;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Distance(in KM) : ");
    scanf("%d",&iValue);
    iRet = KMtoMeter(iValue);
    printf("The distance will be %d Meters.",iRet);

    return 0;
}