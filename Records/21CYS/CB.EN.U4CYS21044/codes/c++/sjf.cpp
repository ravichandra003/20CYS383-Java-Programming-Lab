#include<stdio.h>
 int main()
{
    int bt[20],p[20],wt[20],tat[20],i,j,n,total=0,pos,temp;
    float avgwt,avgtat;
    printf("Enter number of process:");
    scanf("%d",&n);
  
    printf("Enter Burst Time:");
    for(i=0;i<n;i++)
    {
        printf("p%d:",i+1);
        scanf("%d",&bt[i]);
        p[i]=i+1;         
    }

    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(bt[j]<bt[pos])
                pos=j;
        }
  
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
  
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }
   
    wt[0]=0;            
  
   
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
  
        total+=wt[i];
    }
  
    avgwt=(float)total/n;      
    total=0;
  
    printf("Processt    Burst Time    Waiting Time  Turnaround Time");
    for(i=0;i<n;i++)
    { printf("\n");
        tat[i]=bt[i]+wt[i];   
        total+=tat[i];
        printf("np%d\t\t %d\t\t %d\t\t %d",p[i],bt[i],wt[i],tat[i]);
    }
  
    avgtat=(float)total/n;    
    printf("\nAverage Waiting Time=%f\n",avgwt);
    printf("Average Turnaround Time=%f\n",avgtat);
}
