// // A C program for Prim's Minimum
// // Spanning Tree (MST) algorithm. The program is
// // for adjacency matrix representation of the graph

// #include <limits.h>
// #include <stdbool.h>
// #include <stdio.h>

// // Number of vertices in the graph
// #define V 5

// // A utility function to find the vertex with
// // minimum key value, from the set of vertices
// // not yet included in MST
// int minKey(int key[], bool mstSet[])
// {
// 	// Initialize min value
// 	int min = INT_MAX, min_index;

// 	for (int v = 0; v < V; v++)
// 		if (mstSet[v] == false && key[v] < min)
// 			min = key[v], min_index = v;

// 	return min_index;
// }

// // A utility function to print the
// // constructed MST stored in parent[]
// int printMST(int parent[], int graph[V][V])
// {
// 	printf("Edge \tWeight\n");
// 	for (int i = 1; i < V; i++)
// 		printf("%d - %d \t%d \n", parent[i], i,
// 			graph[i][parent[i]]);
// }

// // Function to construct and print MST for
// // a graph represented using adjacency
// // matrix representation
// void primMST(int graph[V][V])
// {
// 	// Array to store constructed MST
// 	int parent[V];
// 	// Key values used to pick minimum weight edge in cut
// 	int key[V];
// 	// To represent set of vertices included in MST
// 	bool mstSet[V];

// 	// Initialize all keys as INFINITE
// 	for (int i = 0; i < V; i++)
// 		key[i] = INT_MAX, mstSet[i] = false;

// 	// Always include first 1st vertex in MST.
// 	// Make key 0 so that this vertex is picked as first
// 	// vertex.
// 	key[0] = 0;

// 	// First node is always root of MST
// 	parent[0] = -1;

// 	// The MST will have V vertices
// 	for (int count = 0; count < V - 1; count++) {
		
// 		// Pick the minimum key vertex from the
// 		// set of vertices not yet included in MST
// 		int u = minKey(key, mstSet);

// 		// Add the picked vertex to the MST Set
// 		mstSet[u] = true;

// 		// Update key value and parent index of
// 		// the adjacent vertices of the picked vertex.
// 		// Consider only those vertices which are not
// 		// yet included in MST
// 		for (int v = 0; v < V; v++)

// 			// graph[u][v] is non zero only for adjacent
// 			// vertices of m mstSet[v] is false for vertices
// 			// not yet included in MST Update the key only
// 			// if graph[u][v] is smaller than key[v]
// 			if (graph[u][v] && mstSet[v] == false
// 				&& graph[u][v] < key[v])
// 				parent[v] = u, key[v] = graph[u][v];
// 	}

// 	// print the constructed MST
// 	printMST(parent, graph);
// }

// // Driver's code
// int main()
// {
// 	int graph[V][V] = { { 0, 2, 0, 6, 0 },
// 						{ 2, 0, 3, 8, 5 },
// 						{ 0, 3, 0, 0, 7 },
// 						{ 6, 8, 0, 0, 9 },
// 						{ 0, 5, 7, 9, 0 } };

// 	// Print the solution
// 	primMST(graph);

// 	return 0;
// }









#include <stdio.h>    
#include <limits.h>    
#define vertices 5  /*Define the number of vertices in the graph*/  
/* create minimum_key() method for finding the vertex that has minimum key-value and that is not added in MST yet */   
int minimum_key(int k[], int mst[])    
{  
    int minimum  = INT_MAX, min,i;    
      
    /*iterate over all vertices to find the vertex with minimum key-value*/  
    for (i = 0; i < vertices; i++)  
        if (mst[i] == 0 && k[i] < minimum )   
            minimum = k[i], min = i;    
    return min;    
}    
/* create prim() method for constructing and printing the MST.  
The g[vertices][vertices] is an adjacency matrix that defines the graph for MST.*/  
void prim(int g[vertices][vertices])    
{    
    /* create array of size equal to total number of vertices for storing the MST*/  
    int parent[vertices];    
    /* create k[vertices] array for selecting an edge having minimum weight*/  
    int k[vertices];       
    int mst[vertices];      
    int i, count,edge,v; /*Here 'v' is the vertex*/  
    for (i = 0; i < vertices; i++)  
    {  
        k[i] = INT_MAX;  
        mst[i] = 0;    
    }  
    k[0] = 0; /*It select as first vertex*/  
    parent[0] = -1;   /* set first value of parent[] array to -1 to make it root of MST*/  
    for (count = 0; count < vertices-1; count++)    
    {    
        /*select the vertex having minimum key and that is not added in the MST yet from the set of vertices*/  
        edge = minimum_key(k, mst);    
        mst[edge] = 1;    
        for (v = 0; v < vertices; v++)    
        {  
            if (g[edge][v] && mst[v] == 0 && g[edge][v] <  k[v])    
            {  
                parent[v]  = edge, k[v] = g[edge][v];    
            }  
        }  
     }    
     /*Print the constructed Minimum spanning tree*/  
     printf("\n Edge \t  Weight\n");  
     for (i = 1; i < vertices; i++)    
     printf(" %d <-> %d    %d \n", parent[i], i, g[i][parent[i]]);    
      
}    
int main()    
{    
    int g[vertices][vertices] = {{0, 0, 3, 0, 0},    
                                {0, 0, 10, 4, 0},    
                                {3, 10, 0, 2, 6},    
                                {0, 4, 2, 0, 1},    
                                {0, 0, 6, 1, 0},    
                                };   
    prim(g);    
    return 0;  
}  
