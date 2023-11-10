/**************************************************************************
 *  $Id$
 *  File:	Graph.h - Definition file for List
 *
 *  Purpose:	
 *
 *  Author:	Devashish Dewangan CS21M017
 *************************************************************************/
#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>

using namespace std;
typedef int vertexType ;
typedef int WeightType;

class Graph{

    private: // std

        int numVertex, numEdge; //store number of vertices, edges
        vertexType ** matrix; // Pointer to adjacency matirx
             

    public:
        /* Constructor to initialize the graph */
        Graph(int numVert);
         
        /* Function to initialize the graph */
        void Init(vertexType n);
        
    
        /* Returns the number of vertices in the graph */
        int getVertices();     
        
        /* Returns the number of edges in the graph */
        int getEdges();                                                
        
        /* Returns the first node with v as source */
        vertexType first(vertexType v);                                 
        
        /* Returns the node next to w whose source is v */
        vertexType next(vertexType v, vertexType w); 
    
        /* Sets the weight as wt for the edge between v1 and v2 */
        void setEdge(vertexType v1, vertexType v2, WeightType wt); 

        /* removes the edge between v1 and v2 */
        void delEdge(vertexType v1, vertexType v2); 

        /* Returns true if there exists an edge between v1 and v2 */
        bool isEdge(vertexType v1, vertexType v2); 

        /* Returns the weight of the edge connecting v1 and v2 */
        WeightType weight(vertexType v1, vertexType v2); //
        
};
#endif
