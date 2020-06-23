#include<iostream>
#include<stdio.h>
#include<string>
#include<string.h>
#include<stdlib.h>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<queue>
#define INF 0x3F3F3F3F 
#include<stack>

using namespace std;


int grafo[1000][1000];
int ordem;
bool visitado[1000];
int dist[1000];
int pred[1000];


void bfs(int p)
{
   memset(dist,INF,sizeof(int)*ordem);
   dist[p] = 0;
   queue <int> q;
   q.push(p);
   while(!q.empty())
   {
      int u = q.front();
      q.pop();
      for(int v=0; v<ordem; ++v)
      {
         if(dist[v] == INF && grafo[u][v])
         {
            dist[v] = dist[u] + 1;
            q.push(v);
         }
      }
   }
}

int main()
{
   
   int n;
   while(true)
   {
      cin>>n;
      if(!n) break;
      ordem = n*n;
      memset(grafo,0,sizeof(grafo));
      int nor,sul,oes,les;
      for(int i=0; i<n; i++)
      {
         for(int j=0; j<n; j++)
         {
            cin>>nor>>sul>>oes>>les;
            
            if(i-1>=0 && nor==1) grafo[j+(i*n)][j+((i-1)*n)] = nor;
            if(i+1 < n && sul==1)grafo[j+(i*n)][j+((i+1)*n)] = sul;
            if(j-1>=0 && oes==1)grafo[j+(i*n)][j+((i*n)-1)] = oes;
            if(j+1<n && les==1) grafo[j+(i*n)][j+((i*n)+1)] = les;
         }
      }
      int tes;
      cin>>tes;
      int num = ((n-1)*(n));
      while(tes--)
      {
         int xi,yi,xd,yd;
         int p,d;
         cin>>xi>>yi>>xd>>yd;
         p = num - (yi*n) + xi;
         d = num - (yd*n) + xd;
         bfs(p);
         if(dist[d] != INF) cout<<dist[d]<<endl;
         else cout<<"Impossible\n";
         
      }
      cout<<endl;
   }
   
}

