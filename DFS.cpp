//As adjaceny list model is being used I am using list library here
#include<iostream>
#include<list>
using namespace std;

class graph  //also structures can be used
{
   private:
         int size; //to declare number of vertices of graph
 	 list<int> *pointer;

   public:
   	   graph(int size);
       void dfs_start(int start_vertice,int visited[]);
	 void  graph_addEdge(int u,int v);

};

graph::graph(int size)
{
  this->size=size;
  pointer=new list<int>[size];
}
void graph::graph_addEdge(int u,int v)
{
   pointer[u].push_back(v);
}

void dfs_start(int start_vertice,int visited[])
{
   visited[start_vertice]=1;
   cout<<start_vertice;
  list<int>:: iterator it;
   for(it=pointer[start_vertice].begin();it!=pointer.end();it++)
   {

	if(!visited[*it])
	  dfs_start(*it,visited);
        
   }


}


int main()
{
  int i,size_,start;
 cout<<"Enter number of graph nodes";
 cin>>size_;
 graph(size_);
 int *visited = new int[size_];
  //statically  I am adding Edges but can be easily done also at runtime
  graph g(size_);
 g.graph_addEdge(0,1);
 g.graph_addEdge(3,2);
 g.graph_addEdge(2,2);
 g.graph_addEdge(3,0);
 g.graph_addEdge(3,3);
 g.graph_addEdge(1,3);

 cout<<"Enter start point";
 cin>>start;

  for(i=0;i<size_;i++)
    visited[i]=0;
 dfs_start(start,visited);
  
return 0;
}
