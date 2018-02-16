#include<stdio.h>
int main(void)
{
int sum,i,j,s=0,digit=0,n,b[100];
scanf("%d",&sum);
int a=800;
for(i=a;i<sum;i++)
{
for(j=0;j<sum;j++)
{
if(j%2==0)
{
i=i+j;
if(i<sum)
{
b[j]=i;
//printf("%d ",b[j]);
while(b[j]>0)
{
digit=b[j]%10;
s=s+digit;
b[j]/=10;

}
printf("%d ",s);
s=0;
}
}
}
}
}












