#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
int a,b,mat[101][101],visited[101];
int main(void)
{
    cin >> a >> b;
    memset(mat,0,sizeof(mat));
    memset(visited,0,sizeof(visited));
    for (int i = 0; i < b; i++){
        int x,y;
        cin >> x >> y;
        mat[x][y] = 1;
        mat[y][x] = 1;
    }
    int infected = 0;
    queue<int> q;
    q.push(1);
    visited[1] = 1;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int i = 1; i <= a; i++){
            if (!visited[i] && mat[v][i]){
                q.push(i);
                visited[i] = 1;
                infected++;
            }
        }
    }
    cout << infected;
}