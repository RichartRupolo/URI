#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <queue>
#include <algorithm>

#define INF 999999999

using namespace std;

int n, m, c, k;
int grafo[1010][1010];
int custo[1010];

queue<int> fila;


void infinite()
{
	for(int i=0; i<=n; i++){
		custo[i]= INF;
		for(int j=0; j<=n; j++) grafo[i][j]=INF;
	}
}


int dijkstra(int ori, int dest){
	custo[ori] = 0;
	fila.push(ori);
	while(!fila.empty()){
		int i = fila.front();
		fila.pop();
		for(int j=0; j<n; j++){
			if(grafo[i][j] != INF && custo[j] > custo[i] + grafo[i][j]){
				custo[j] = custo[i] + grafo[i][j];
				fila.push(j);
			}
		}
	}
	return custo[dest];
}

int main ()
{
	while ((cin >> n >> m >> c >> k) && (n!=0 && m!=0 && c!=0 && k!=0)){
	
	infinite();
	
	for(int i=1; i<=m; i++){ 
		
		
		int u, v, p;
		cin >> u >> v >> p;
	
		if(u>=c && v>=c){ 
			
			
			grafo[u][v]=p;
			grafo[v][u]=p;
		}
		
		if(u>=c && v<c) grafo[u][v]=p; 
		
		
		if(u<c && v>=c) grafo[v][u]=p; 
		
		
		if(u<c && v<c && abs(u-v)==1){
			
		
			grafo[u][v]=p;
			grafo[v][u]=p;
		}
	}
	
	cout << dijkstra(k, c-1) << endl; 
}
	return 0;
}

