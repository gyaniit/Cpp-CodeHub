#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

//finds next min index
int minDist(int dist[],bool seti[], int v){
    int mini=INT_MAX,min_index;
    for(int i=0;i<v;i++){
        if(!seti[i] && dist[i]<=mini){
            mini=dist[i];
            min_index=i;
        }
    }
    return min_index;
}

//prints results
void prntRes(int dist[],int src,int v){
    for(int i=0;i<v;i++){
        if(i!=src){
            if(dist[i]==INT_MAX)
                cout<<-1<<" ";
            else
                cout<<dist[i]<<" ";
        }
    }
    cout<<endl;
}

//the Dijkstra function
void dijkstra(int v,int src, int **G){
    int dist[v];
    bool seti[v];

    for(int i=0;i<v;i++)
            for(int j=0;j<v;j++){
                cout<<G[i][j]<<" ";
                //G[j][i]=0;

        }
        cout<<endl;

     for(int i=0;i<v;i++){
         dist[i]=INT_MAX;
         seti[i]=false;
         //cout<<dist[i]<<" <-";
     }
	cout<<src<<"<-";
    dist[src]=0; //setting dist for source as 0
    //seti[src]=true; //finalising source
	cout<<"stage-2 ";

	for (int count = 0; count < v-1; count++)
     {
	    int u = minDist(dist,seti,v); //finding next min from dist
	    seti[u]=true; //finalising next min
		cout<<"stage-3 ";

	    for(int j=0; j<v;j++){
			cout<<"stage-4-"<<dist[j]<<dist[u]<<G[u][j];
		   if(!seti[j] && G[u][j] && dist[u]!=INT_MAX && dist[j] > G[u][j] + dist[u]){
			  dist[j] = G[u][j] + dist[u];
			  cout<<"stage-4-> "<<dist[j];
		   }
	    }
     }
     cout<<"stage 5";
    prntRes(dist,src,v);

}

//the same old int main
int main() {
    int t;
    cin>>t;
    while(t--){
        int v,e,s;
        cin>>v>>e;

		//defiing and initialising graph [][]
        int G[v][v];
        //G=new int*[v];
        for(int i=0;i<v;i++)
            for(int j=0;j<v;j++){
                G[i][j]=0;
                //cout<<G[i][j]<<" ";

        }
        cout<<endl;

        //values for graph edges
        for(int i=0; i<e; i++){
            int a,b,c;
            cin>>a>>b>>c;

            G[a-1][b-1]=c;
            G[b-1][a-1]=c;
            //cout<<a<<" ";
        }

        cin>>s;
        cout<<"Stage 1"<<endl;

        //calling Dijkstra
        dijkstra(v,s-1,(int **)G);
    }
    return 0;
}
