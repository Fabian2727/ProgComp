#include <iostream>
#include <list>
#include <stack>

using namespace std;

class Graph 
{
	int V;	//cantidad de elementos en el grafo
  	list<int> *adj;	//lista de elementos adyacentes al nodo actual
  	
  	//Función para conocer el orden de recorrido del grafo
  	void orden(int s, bool visited[], stack<int> &Stack) // s -> nodo actual	visited -> bool de elementos visitados	stack -> almacena último elem. del conjunto de SCC
  	{
	  visited[s] = true;
	
	  list<int>::iterator i;
	  
	  for (i = adj[s].begin(); i != adj[s].end(); ++i)
	  {
	  	if (!visited[*i])
	  	{
			orden(*i, visited, Stack);
		}
	      
	  }
	  Stack.push(s);	// agregar elementos recorridos
	}
	
	//Funcion DFS
  	void DFS(int s, bool visited[])	//	s -> nodo actual	visited -> elementos visitados
  	{
		visited[s] = true;
	  	cout << s << " ";	//mostrar elementos actual
	
	  	list<int>::iterator i;
	  	for (i = adj[s].begin(); i != adj[s].end(); ++i)
	  	{
	  		if (!visited[*i])
	  		{
	  			DFS(*i, visited);
			}
	  	}
	}

	public:
  		Graph(int V)
  		{
  			this->V = V; // cantidad de elementos en el grafo
  			adj = new list<int>[V];	//agregar nodo a lista de adyacentes
		}
		
  		void insert(int ini, int fin)	//ini -> nodo de partida	fin->nodo de llegada
  		{
		  adj[ini].push_back(fin); //agregar nodo a lista de adyacentes
		}
		
		Graph trans() // grafo transpuesto (inverso)
  		{
			Graph g(V);
			
		  	for (int i = 0; i < V; i++) 
		  	{
		    	list<int>::iterator j;
		    	for (j = adj[i].begin(); j != adj[i].end(); ++j) 
				{
		      		g.adj[*j].push_back(i); //agrega elementos correspondientes al SSC
		    	}
		  	}
			return g;
		}
		
  		void print()
  		{
			stack<int> Stack;
			bool *visited = new bool[V];
			
			for (int i = 0; i < V; i++)
			{
				visited[i] = false;
			}
			
			for (int i = 0; i < V; i++)
			{
				if (!visited[i])
			  	{
					orden(i, visited, Stack);
				}
			}
			  
			Graph inverse = trans(); //creacion del grafo inverso
			
			for (int i = 0; i < V; i++)
			{
			  	visited[i] = false;
			}
			
			while (Stack.empty() == false) //mientras el stack de elementos visitados siga lleno
			{
				int s = Stack.top();
			    Stack.pop();
			
			    if (visited[s] == false)
				{
					inverse.DFS(s, visited); //DFS al nodo inverso para saber el SSC y marcarlo como visitado
			      	cout << " | ";
			    }
			}
		}
}; 

int main() 
{
  Graph g(8);
  
  g.insert(0, 1);
  g.insert(1, 2);
  g.insert(2, 3);
  g.insert(2, 4);
  g.insert(3, 0);
  g.insert(4, 5);
  g.insert(5, 6);
  g.insert(6, 4);
  g.insert(6, 7);

  g.print();
}
