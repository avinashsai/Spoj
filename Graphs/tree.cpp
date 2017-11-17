#include<iostream>
#include<string.h>
#include<list>
using namespace std;
int flag=0;
class graph{
long int v;
list<long int> *adj;
public:
graph(long int v);
void add_edge(long int u,long int w);
void dfs_util(long int s,bool visited[]);
void dfs();
};
graph::graph(long int v)
{
this->v=v;
adj=new list<long int>[v];
}
void graph::add_edge(long int u,long int w)
{
adj[u].push_back(w);
} 
void graph::dfs_util(long int u,bool visited[])
{
visited[u]=true;
list<long int>::iterator i;
for(i=adj[u].begin();i!=adj[u].end();i++)
{
if(!visited[*i])
dfs_util(*i,visited);
else{
flag=1;
}
}
}
void graph::dfs()
{
bool visited[10000];
memset(visited,false,sizeof(visited));
for(int i=0;i<v;i++)
{
    if(visited[i]==false)
    dfs_util(i,visited);
}
if(!flag)
cout<<"YES";
else
cout<<"NO";
}
int main()
{
long int n,m,i,j;
cin>>n>>m;
graph g(n);
while(m--)
{
cin>>i>>j;
i=i-1,j=j-1;
g.add_edge(i,j);
}
g.dfs();
return 0;
}


