#include <stdio.h>
int p[5]={3,5,10,2,5};
int m[5][5];
void MCM(int);
int min(int,int);

int main()
{
int n=4,i,j;
MCM(n);
/* for(i=0;i<=4;i++)
{
for(j=0;j<=4;j++)
{
printf(" %d",m[i][j]);
}
printf("\n");
}*/
printf("\n Minimum cost of multiplication %d",m[1][4]);

return 0;
}

void MCM(int n)
{
int i,j,k,x;
for(i=1;i<=n;i++)
m[i][i]=0;
x=2;
for(i=1;i<=n-1;i++)
{
j=x;

while(j<=n)
{
m[i][j]=1000 ;
j++;
}
x++;
}

x=2;
while(x<=n)
{
i=1;
j=x;
while(i<=n)
{
if(j<=n)
{
for(k=i;k<=j-1;k++)
{
m[i][j]=min(m[i][j],m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j]);
}
j++;
}
i++;
}
x++;
}
// return m[1][n];
}
int min(int a,int b)
{
if(a<b)
return a;
else

return b;
}