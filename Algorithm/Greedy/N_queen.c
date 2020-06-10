/*
https://www.acmicpc.net/problem/9663
*/
#include <stdio.h>

int     diag1[29] = {0, };
int     diag2[29] = {0, };;
int     row_vec[15] = {0, };;
int     N;
int     count = 0;

void    put_Queen(int row, int col, int val) {
    
    diag1[col - row + 9] = val;
    diag2[row + col] = val;
    row_vec[row] = val;
}

void    DFS(int col) {

    if (col == N) {
        count++;
        return ;
    }
    else
    {
        for (int row = 0; row < N; row++) {
            if (row_vec[row] == 0 && diag1[col - row + 9] == 0 && diag2[row + col] == 0) {
                put_Queen(row, col, 1);
                DFS(col + 1);
                put_Queen(row, col, 0);
            }
        }
    }
}

int     main(void) {

    scanf("%d", &N);
    DFS(0);
    printf("%d", count);
}