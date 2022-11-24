#include <iostream>
#include <list>
#include <vector>
#include <queue>
#include <limits>
#include <functional>

using namespace std;

int INF = numeric_limits<int>::max();

typedef pair<int, int> apurr;


// Using adjacency list
class Graph {
	int V; 

	list<pair<int, int> >* N; // store vertex and weight for every pair

public:
	Graph(int V);

	void addEdge(int u, int v, int w);


	void shortestPath(int s, int dest); 
};


Graph::Graph(int V){
	this->V = V;
	N = new list<apurr>[V];
}

void Graph::addEdge(int u, int v, int w)
{
	N[u].push_back(make_pair(v, w));
	N[v].push_back(make_pair(u, w));
}


void Graph::shortestPath(int src,int dest){

	priority_queue<apurr, vector<apurr>, greater<apurr> > 
        pq;

	vector<int> T(V, INF);

	pq.push(make_pair(0, src));
	T[src] = 0;

	while (!pq.empty()) {
		int u = pq.top().second;
		pq.pop();


		list<pair<int, int> >::iterator i;
		for (i = N[u].begin(); i != N[u].end(); ++i) {
			int v = (*i).first;
			int weight = (*i).second;

			if (T[v] > T[u] + weight) {
				T[v] = T[u] + weight;
				pq.push(make_pair(T[v], v));
			}
		}
	}

    cout<< T[dest]<< endl;

}


int main()
{

    int n,m;
    cin >> n >> m;
	int V = n;
	Graph g(V);

    int s,f;
    cin >> s >> f;

    int u,v,w;
    for(int i = 0; i < m; i++){
        cin >> u >> v >> w;
        g.addEdge(u,v,w);
    }


	g.shortestPath(s,f);

}
