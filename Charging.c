#include <stdio.h>
#include <math.h>
#include <string.h>

#include "Charging.h"

int chargingSamples[100];
int NumOfChargingSamples;

void BubbleSort(int chargingSamples[], int NumCS);
void PrintSortedElements(int chargingSamples[], int NumCS);
bool SampleAreConsecutive(int chargingSamples[], int NumCS);

int GetChargingRange()
{
  //return;
}

int getPeriodicCharingSample()
{
  bool consecutive;
  int i;
  printf("Enter number of charging samples\n");
  scanf("%d",&NumOfChargingSamples);
  
  printf("Enter the charging samples\n");
  for(i=0;i<NumOfChargingSamples;i++)
  {
    scanf("%d",&chargingSamples[i]);
  }
  
  BubbleSort(chargingSamples, NumOfChargingSamples);
  PrintSortedElements(chargingSamples, NumOfChargingSamples);
  consecutive = SampleAreConsecutive(chargingSamples, NumOfChargingSamples);
  return consecutive;
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

void PrintSortedElements(int chargingSamples[], int NumCS)
{
  int i;
  printf("Sorted elements\n");
  for(i=0;i<NumCS;i++)
  {
    printf(" %d \n",chargingSamples[i]);
  }
}

bool SampleAreConsecutive(int chargingSamples[], int NumCS)
{
  int i, range, reading;
  bool consecutive;
  for(i=1;i<NumCS;i++)
  {
    if(chargingSamples[i] != ((chargingSamples[i-1])+1))
    {
      consecutive = false;
    }
    consecutive = true;
  }
  return consecutive;
}
