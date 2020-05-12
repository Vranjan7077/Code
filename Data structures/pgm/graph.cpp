#include<iostream>
#include<conio.h>
using namespace std;
struct graph
{
	int v,e;
	int **adj;
};
struct graph *adjmatrix()
{
	int u,v,i;
	struct graph *g=(struct graph *)malloc(sizeof (struct graph));
	if(g)
	{
		cout<<"Memory error:";
		return;
	}
	cout<<"Enter number of nodes and number of edges : ";
	cin>>"&d">>&g->v>>"&d">>&g->e;
	g->adj * malloc(sizeof(int)*(g->v *g->v));
	for(u=0;u<g->v;u++)
		for(v=0;v<g->v;v++)
			g->adj[u][v]=0;
		cout<<"Enter nodes number in a pair that connects an edge: ";
		for(i=0;i<g->e;i++)
		{
			cin>>"%d">>&u>>"%d">>&v;
			g->adj[u][v]=1;
			g->adj[v][u]=1;
		}
return g;		
}
