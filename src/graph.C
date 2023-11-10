/*-------------------------------------------------------------------------
 *  graph.C - Implements graph using adjency matrix
 *  Version:	$Name$
 *  Module:	
 *
 *  Purpose:	
 *  See:	
 *
 *  Author:	Devashish Dewangan CS21M017
 *
 *  Created:        Mon 1-Nov-2021 14:00:00
 *  Last modified:  Mon 1-Nov-2021 17:00:00 By Devashish Dewangan
 *  $Id$
 *
 *  Bugs:	
 *
 *  Change Log:	<Date> <Author>
 *  		<Changes>
 -------------------------------------------------------------------------*/
#include <iostream>
#include "../include/Graph.h"
using namespace std;
typedef int vertexType ;
typedef int WeightType;


       
/* Constructor to initialize the graph */
Graph::Graph(int numVert)
{
    // cout<<"Cnstructed";
    Init(numVert);                                            
}

/* Function to initialize the graph */
void Graph::Init(vertexType n)
{
    numVertex = n;
    numEdge = 0;
    matrix = new vertexType*[n];
    for(int i=0; i < n ;i++)
    {
        matrix[i] = new vertexType[n];
    }
   
}


/* Returns the number of vertices in the graph */
int Graph::getVertices()
{
    return numVertex;
}

/* Returns the number of edges in the graph */
int Graph::getEdges()
{
    return numEdge;
}

/* Returns the pointer to the first node with v as source */
vertexType Graph::first(vertexType v)
{
    
    return v;
}

/* Returns the pointer to the node next to w whose source is v */
vertexType Graph::next(vertexType v, vertexType w)
{
    return v;
}

/* Sets the weight as wt for the edge between v1 and v2 */
void Graph::setEdge(vertexType v1, vertexType v2, WeightType wt)
{
    matrix[v1][v2] = wt;
    matrix[v2][v1] = wt;
    numEdge++;
}

/* removes the edge between v1 and v2 */
void Graph::delEdge(vertexType v1, vertexType v2)
{
    matrix[v1][v2] = 0;
    
}

/* Returns true if there exists an edge between v1 and v2 */
bool Graph::isEdge(vertexType v1, vertexType v2)
{
    if(matrix[v1][v2])
        return true;
    else
        return false;
}

/* Returns the weight of the edge connecting v1 and v2 */
WeightType Graph::weight(vertexType v1, vertexType v2) //
{
    return matrix[v1][v2];
}


