//second frequently occuring element
/*
5
1
2
1
3
1
op:
1-->3 2-->1 3-->1 
2-->1 
*/
#include<stdio.h>
int main()
{
 int a[30],i,j,n,temp1,temp2,count,f[30];
 scanf("%d",&n);
 for(i=0;i<n;i++)
  {scanf("%d",&a[i]);
     f[i]=-1;
  }
 for(i=0;i<n;i++)
 {count=1;
 for(j=i+1;j<n;j++)
  {
    if(a[i]==a[j])
    {
       count++;
       f[j]=0;
    }
  }
  if(f[i]!=0)
    f[i]=count;
 }
 for(i=0;i<n;i++)
  {for(j=i+1;j<n;j++)
   {
     if(f[i]!=0 && f[i]<f[j])
     {
        temp1=f[i];
        f[i]=f[j];
        f[j]=temp1;
        temp2=a[i];
        a[i]=a[j];
        a[j]=temp2;
    
     }
  }
 }
for(i=0;i<n;i++)
  if(f[i]!=0)
   printf("%d-->%d ",a[i],f[i]);
 printf("\n");
 for(i=0;i<n;i++)
 { 
   if(f[i+1]!=0)
     { printf("%d-->%d ",a[i+1],f[i+1]);
       break;
     } 
}
 
 printf("\n");
 return 0;
}
