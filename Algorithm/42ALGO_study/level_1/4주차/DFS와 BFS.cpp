#include <iostream>
#include <cstring>
#include <queue>
using namespace std;
int Dots,Lines,Start, mat[1001][1001], used[1001];
queue<int> q;
void DFS(int start_idx, int checked)
{
    cout << start_idx << ' ';
    used[start_idx] = 1;
    for (int i = 1; i <= Dots; i++)
        if (mat[start_idx][i] && !used[i])
            DFS(i, checked + 1);
}

void BFS(void)
{
    used[Start] = 1;
    q.push(Start);
    while (!q.empty()){
        int val = q.front();
        q.pop();
        cout << val << " ";
        for (int i = 1; i <= Dots; i++){
            if (mat[val][i] && !used[i]){
                q.push(i);
                used[i] = 1;
            }
        }
    }
}

int main(void)
{
    cin>>Dots>>Lines>>Start;
    memset(mat, 0, sizeof(mat));
    memset(used, 0, sizeof(used));
    for (int i = 0; i < Lines; i++){
        int a,b;
        cin >> a >> b;
        mat[a][b] = 1;
        mat[b][a] = 1;
    }
    DFS(Start, 1);
    memset(used, 0, sizeof(used));
    cout << "\n";
    BFS();
    return 0;
}