#include<stdio.h>
int cost[4][4]={0,1,0,1,1,0,1,0,0,1,0,1,1,0,1,0},visited[4]={0},n=4;
void DFS(int);
int main() {
	// Write C code here
	int v;
	printf("Enter the starting vertex\n");
	scanf("%d",&v);
	DFS(v);
	return 0;
}
void DFS(int v)
{
		int i,j,w;
		visited[v]=1;
		printf("%d\n",v);
		for(i=0;i<n;i++)
		{
		if(i==v)
		{
		for(j=0;j<n;j++)
		{
		if(cost[i][j]==1)
		{
		w=j;
		if(visited[w]==0)
		DFS(w);
		}
		}

		}

		}
}