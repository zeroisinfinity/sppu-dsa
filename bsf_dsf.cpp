
//using adj matrix -BFS(Que)
#include<iostream>
#include<stdlib.h>
#include <vector>
#include <set>
using namespace std;
int cost[10][10],i,j,k,n,qu[10],front,rear,v,visit[10],visited[10];
int stk[10],top,visit1[10],visited1[10];
int main()
{
int m;
vector<int> vertices;
set<int> compress;
cout<<"enter no of vertices";
cin>> n;
cout<<"enter no of edges";
cin>> m;
cout<<"\nEDGES \n";
int min = 11;
for(k=1;k<=m;k++){

cin>>i>>j;
vertices.push_back(i);
vertices.push_back(j);
if(i < min){
     min = i;
}
if(j < min){
     min = j;
}
cost[i][j]=1;
cost[j][i]=1;
}
for(int x: vertices){
     compress.insert(vertices.back());
     vertices.pop_back();
}
vertices.clear();

//display function
cout<<"The adjacency matrix of the graph is:"<<endl;
cout<< "  ";
for(int head : compress){
cout<<" "<<head;
}
cout << endl;
for(int i : compress){
     cout << i << " ";

for(int j : compress){
cout<<" "<<cost[i][j];
}
cout<<endl;
}
cout<<"Enter initial vertex";
cin>>v;
cout<<"The BFS of the Graph is\n";
cout<< v;
visited[v]=1;
k=1;
while(k<n)
{
for(j=1;j<=n;j++)
if(cost[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
{
visit[j]=1;
qu[rear++]=j;
}
v=qu[front++];
cout<<v << " ";
k++;
visit[v]=0; visited[v]=1;
}
cout<<"Enter initial vertex";
cin>>v;
cout<<"The DFS of the Graph is\n";
cout<< v;
visited[v]=1;
k=1;
while(k<n)
{
for(j=n;j>=1;j--)
if(cost[v][j]!=0 && visited1[j]!=1 && visit1[j]!=1)
{
visit1[j]=1;
stk[top]=j;
top++;
}
v=stk[--top];
cout<<v << " ";
k++;
visit1[v]=0; visited1[v]=1;
}
}




