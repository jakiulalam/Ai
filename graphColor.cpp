#include <iostream>
#include <list>
using namespace std;

int V;
list<int> *adj;

void Coloring()
{
	int result[10];
	bool available[10];

	result[0] = 0;

	for (int i = 1; i < V; i++)
	{
		result[i] = -1;
		available[i] = false;
	}

	for (int u = 1; u < V; u++)
	{
		list<int>::iterator i;
		for (i = adj[u].begin(); i != adj[u].end(); ++i)
		{
			if (result[*i] != -1)
				available[result[*i]] = true;
		}

		int cr;
		for (cr = 0; cr < V; cr++)
		{
			if (available[cr] == false)
				break;
		}

		result[u] = cr; 

		for (i = adj[u].begin(); i != adj[u].end(); ++i)
		{
			if (result[*i] != -1)
				available[result[*i]] = false;
		}
	}

	for (int u = 0; u < V; u++)
	{
		cout << "Vertex " << u << " --->  Color " << result[u] << endl;
	}
}

int main()
{
	int n1, n2;
	int v, e;
	cin >> v >> e;
	
	V = v;
	adj = new list<int>[V];

	for (int i = 0; i < e; i++)
	{
		cin >> n1 >> n2;
		adj[n1].push_back(n2);
		adj[n2].push_back(n1);

	}

	cout << "\nColoring the graph : \n";
	Coloring();


	return 0;
}

/*
5 6
0 1
0 2
1 2
1 3
2 3
3 4
*/