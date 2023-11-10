/*-------------------------------------------------------------------------
 *  main -- Main Program for Complement
 *    Args:	none
 *    Returns:	List of Complement i.e. (A - B) in sorted order
 *    Throws:	
 *    See:	
 *    Bugs:	
 -------------------------------------------------------------------------*/

//Note: Donot edit the code given in between the boundaries:
/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/


#include <iostream>
#include "../include/Graph.h"
using namespace std;

void DFS(int source, Graph * graph){
    cout<<source<<" ";
    // Marking source as visited.
    for(vertexType i =0; i < graph->getVertices(); i++)
    {
        graph->delEdge(i, source);
    }
    
    for(vertexType i =0; i < graph->getVertices(); i++)
    {
        if(graph->isEdge(source, i))
        {
            DFS(i, graph);       
        }
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int m, n, start;
    cin>>m; // no. of vertices
    cin>>n; // no. of edges
    cin>>start; // source vertex
    Graph graph(m); // initializing graph
    // adding edges
    for(int i=0; i<n; i++)
    {
        vertexType v1,v2;
        WeightType wt = 1;
        cin>>v1>>v2;
        graph.setEdge(v1, v2, wt);
        
    }
    
    // graph.traverse();
    DFS(start, &graph);
    
    
    return 0;
}

