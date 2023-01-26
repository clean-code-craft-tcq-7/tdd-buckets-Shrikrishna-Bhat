#include <stdio.h>
#include <math.h>
#include <string.h>

#include "Charging.h"

int chargingSamples[100];
int NumOfChargingSamples;

void BubbleSort(int chargingSamples[], int NumCS);
bool SampleAreConsecutive(int chargingSamples[], int NumCS);

int GetChargingRange()
{
  //return;
}

int getPeriodicCharingSample()
{
  bool consective;
  int i;
  printf("Enter number of charging samples\n");
  scanf("%d",&NumOfChargingSamples);
  
  printf("Enter the charging samples");
  for(i=0;i<NumOfChargingSamples;i++)
  {
    scanf("%d",&chargingSamples[i]);
  }
  
  BubbleSort(chargingSamples, NumOfChargingSamples);
  consective = SampleAreConsecutive(chargingSamples, NumOfChargingSamples);
  return consective;
}

void BubbleSort(int chargingSamples[], int NumCS)
{
  int i,j,temp;
  for(i=0;i<NumCS;i++)
  {
    for(j=0;j<(NumCS-i-1);j++)
    {
      if(chargingSamples[j]>chargingSamples[j+1])
      {          
        temp                  = chargingSamples[j];
        chargingSamples[j]    = chargingSamples[j+1];
        chargingSamples[j+1]  = temp;
      }
    }
  }
}

bool SampleAreConsecutive(int chargingSamples[], int NumCS)
{
  int i;
  bool consective;
  for(i=1;i<NumCS;i++)
  {
    if(chargingSamples[i] != chargingSamples[i-1]+1)
    {
      consective = false;
    }
    consective = true;
  }
  return consective;
}
