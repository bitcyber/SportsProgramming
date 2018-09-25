
void floyd(int graph[][v])
{
    int dist[v][v];

    for(int i =0;i<v;i++)
        for(int j=0;J<v;j++)
            dist[i][j]=graph[i][j];

    for(int i=0;i<v;i++)
        for(int j=0;j<v;j++)
            for(int k=0;k<v;k++)
                if(dist[j][i]+dist[i][k] < dist[j][k])
                    dist[j][k] = dist[j][i]+dist[i][k];

}