#include<iostream>
#include<list>
#include<queue>
#define ll long long int
using namespace std;
class graph
{
int v;
list<int>*bug;
public:
graph(int v);
void addedge(int u,int v);
bool bipartitie(int v);
bool check_bipartite(int visited[],int vertex,int v);
};
graph::graph(int v)
{
    this->v=v;
    bug=new list<int>[v];
}
void graph::addedge(int u,int v){
	bug[u].push_back(v);
	bug[v].push_back(u);
}
bool graph::check_bipartite(int visited[],int vertex,int n)
{
	list<int>q;
    q.push_back(vertex);
	while(!q.empty())
	{
          v=q.front();
          q.pop_front();
          list<int>::iterator i;
          for(i=bug[v].begin();i!=bug[v].end();i++)
          {
          	  int x=*i;
               if(visited[x]==-1)
               {
               	  visited[x]=1-visited[v];
               	  q.push_back(x);
               }
               else if(visited[x]!=-1 && visited[x]==visited[v])
               	return false;
          } 
	}
	return true;
}
bool  graph::bipartitie(int n)
{
	int visited[n];
	for(int i=0;i<n;i++)
		visited[i]=-1;
	for(int i=0;i<n;i++)
	{
		if(visited[i]==-1){
		if(!check_bipartite(visited,i,n))
			return false;
	}
	}
	return true;
}
int main()
{
	ll no,n,t,i,j;
	cin>>no;
	for(int k=1;k<=no;k++)
	{
		cin>>n>>t;
		graph g(n);
		while(t--)
		{
			cin>>i>>j;
			i=i-1,j=j-1;
			g.addedge(i,j);
		}
		cout<<"Scenario #"<<k<<":"<<endl;
		if(g.bipartitie(n))
        cout<<"No suspicious bugs found!"<<endl;
        else
        	cout<<"Suspicious bugs found!"<<endl;
	}
}