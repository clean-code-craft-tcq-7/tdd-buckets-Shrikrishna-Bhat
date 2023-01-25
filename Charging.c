#include <stdio.h>
#include <math.h>
#include <string.h>

#include "Charging.h"

int chargingSamples[100];
int NumOfChargingSamples;

int GetChargingRange()
{
  //return;
}

int getPeriodicCharingSample()
{
  printf("Enter number of charging samples\n");
  scanf("%d",NumOfChargingSamples);
  
  printf("Enter the charging samples");
  for(int i=0;i<NumOfChargingSamples;i++)
  {
    scanf("%d",chargingSamples[i]);
  }
  
  BubbleSort(chargingSamples, NumOfChargingSamples);
}

void BubbleSort(int chargingSamples[], int NumCS)
{
  int i,j;
  for(i=0;i<NumCS;i++)
  {
    for(j=0;j<(NumCS - i - 1);j++)
    {
      if(chargingSamples[j]>chargingSamples[j+1])
      {
        int temp;             
        temp                  = chargingSamples[j];
        chargingSamples[j]    = chargingSamples[j+1];
        chargingSamples[j+1]  = temp;
      }
    }
  }
}
