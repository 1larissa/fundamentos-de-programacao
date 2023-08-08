/* As posições da matriz no programa abaixo serão:

      [0][1][2][3][4]
  [0]  0  0  0  0  0 
  [1]  0  1  2  3  4
  [2]  0  2  4  6  8
  [3]  0  3  6  9  12
  [4]  0  4  8  12 16
  [5]  0  5  10 15 20
  [6]  0  6  12 18 24
*/

#define N_LINHAS 7
#define N_COLUNAS 5
int main()
{
    int i, j;
    int matriz_foo[N_LINHAS][N_COLUNAS];
    for (i = 0; i < N_LINHAS; i++)
        for (j = 0; j < N_COLUNAS; j++)
            matriz_foo[i][j] = i * j;
    return (0);
}