#include <stdio.h>
#include <math.h>
#include <string.h>

#include "Charging.h"

int GetChargingRange()
{
  //return;
}

int getPeriodicCharingSample()
{
  int chargingSamples[100];
  int NumOfChargingSamples;
  NumOfChargingSamples = 0;
  printf("Enter number of charging samples\n");
  scanf("%d",NumOfChargingSamples);
  
  printf("Enter the charging samples");
  for(int i=0;i<NumOfChargingSamples;i++)
  {
    scanf("%d",chargingSamples[i]);
  }
}
