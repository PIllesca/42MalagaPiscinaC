#include <unistd.h>
#include <stdio.h>
#define SIZE 4
#define UP 0
#define DW 1
#define LF 0
#define RG 1
// Imprime caracter
void ft_putchar(char c){
    write(1, &c, 1);
}
// Imprime número
void ft_putnumber(int x){
    char c;
    c = x + '0';
    write (1, &c, 1);
}
// Dibuja la matriz
void draw_matrix(int matrix[SIZE][SIZE]){
    int i;
    int j;

    i = 0;
    while (i < SIZE)
    {
        j = 0;
        while (j < SIZE)
        {
            ft_putnumber(matrix[j][i]);
            ft_putchar(' ');
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}
// Añadir las pistas con bucle
void add_clue_w(char *str, int col[2][SIZE], int row[2][SIZE])
{
    int i;
    int j;
    i = 0;
    while (i < 2)
    {
        j = 0;
        while (j < SIZE)
        {
            col[i][j] = str[i * SIZE * 2 + j * 2] - '0';
            row[i][j] = str[i * SIZE * 2 + j * 2 + SIZE * 4] - '0';
            j++;
        }
        i++;
    }
}
// Dibujar las pistas para pruebas
void draw_clue(int col[2][SIZE], int row[2][SIZE])
{
    int i;
    int j;
    j = 0;
    while (j < 2)
    {
        i = 0;
        while (i < SIZE)
        {
            ft_putnumber(col[j][i]);
            ft_putchar(' ');
            i++;
        }
        ft_putchar('\n');
        j++;
    }
    j = 0;
    while (j < SIZE)
    {
        ft_putnumber(row[0][j]);
        ft_putchar(' ');
        ft_putnumber(row[1][j]);
        ft_putchar('\n');
        j++;
    }
}
// Inicializar la matriz
void init_matrix(int matrix[SIZE][SIZE]){
    int i;
    int j;

    i = 0;
    while (i < SIZE)
    {
        j = 0;
        while (j < SIZE)
        {
            matrix[j][i] = 0;
            j++;
        }
        i++;
    }
}
// Rellenar columna completa
void ft_fill_column(int matrix[SIZE][SIZE], int i, int j)
{
    int k;

    k = 0;
    while (k < SIZE)
    {
        if (i == 0)
            matrix[k][j] = k + 1;
        else
            matrix[k][j] = SIZE - k;
        k++;
    }
}
// Rellenar fila completa
void ft_fill_row(int matrix[SIZE][SIZE], int i, int j)
{
    int k;

    k = 0;
    while (k < SIZE)
    {
        if (i == 0)
            matrix[j][k] = k + 1;
        else
            matrix[j][k] = SIZE - k;
        k++;
    }
}
// Rellenar tamaño máximo
void ft_fill_max(int matrix[SIZE][SIZE], int col[2][SIZE], int row[2][SIZE])
{
    int i;
    int j;

    i = 0;
    while (i < 2)
    {
        j = 0;
        while (j < SIZE)
        {
            if (col[i][j] == SIZE)
                ft_fill_column(matrix, i, j);              
            if (row[i][j] == SIZE)
                ft_fill_row(matrix, i, j);
            j++;
        }
        i++;
    }
}
// Buscar número en fila
int ft_find_row(int matrix[SIZE][SIZE], int row, int nb)
{
    int i;
    int rt = 0;

    i = 0;
    while (i < SIZE)
    {
        if (matrix [row][i] == nb)
            rt = 1;
        i++;
    }
    return (rt);
}
// Buscar número en columna
int ft_find_col(int matrix[SIZE][SIZE], int col, int nb)
{
    int i;
    int rt = 0;

    i = 0;
    while (i < SIZE)
    {
        if (matrix [i][col] == nb)
            rt = 1;
        i++;
    }
    return (rt);
}
// Los restantes son 1
void ft_fill_rest(int matrix[SIZE][SIZE])
{
    int rw = 0;
    int cl = 0;
    while (cl < SIZE)
    {
        rw = 0;
        while (rw < SIZE)
        {
            if (matrix[cl][rw] == 0)
                matrix[cl][rw] = 1;
            rw++;
        }
        cl++;
    }
}
// Rellenar los 4 a los bordes
void ft_fill_one(int matrix[SIZE][SIZE], int col[2][SIZE], int row[2][SIZE])
{
    int i;

    i = 0;
    while (i < SIZE)
    {
        if (col[UP][i] == 1)
            matrix[0][i] = 4;
        if (row[LF][i] == 1)
            matrix[i][0] = 4;
        if (col[DW][i] == 1)
            matrix[3][i] = 4;
        if (row[RG][i] == 1)
            matrix[i][3] = 4;
        i++;
    }
}
// Si la pista dice 3 y no esta el 4 en la fila o columna poner 4 en el penultimo
void ft_find_four(int matrix[SIZE][SIZE], int col[2][SIZE], int row[2][SIZE])
{
    int i;

    i = 0;
    while (i < SIZE)
    {
        if (col[UP][i] == 3 && !ft_find_col(matrix, i, 4))
            matrix[2][i] = 4;
        if (col[DW][i] == 3 && !ft_find_col(matrix, i, 4))
            matrix[1][i] = 4;
        if (row[LF][i] == 3 && !ft_find_row(matrix, i, 4))
            matrix[i][2] = 4;
        if (row[DW][i] == 3 && !ft_find_row(matrix, i, 4))
            matrix[i][1] = 4;
        i++;
    }
}
void ft_find_three(int matrix[SIZE][SIZE], int col[2][SIZE], int row[2][SIZE])
{
    int i;

    i = 0;
    while (i < SIZE)
    {
        if (col[UP][i] == 3 && matrix[0][i] == 2 && matrix[2][i] == 4)
            matrix[1][i] = 3;
        if (col[DW][i] == 3 && matrix[3][i] == 2 && matrix[1][i] == 1)
            matrix[2][i] = 4;
        if (row[LF][i] == 3 && matrix[i][0] == 2 && matrix[i][2] == 1)
            matrix[i][2] = 3;
        if (row[DW][i] == 3 && matrix[i][3] == 2 && matrix[i][1] == 1)
            matrix[i][1] = 3;
        i++;
    }
}
// Rellenar la matriz
void ft_fillmatrix(int matrix[SIZE][SIZE], int col[2][SIZE], int row[2][SIZE])
{
    ft_fill_max(matrix, col, row);
    ft_fill_one(matrix, col, row);
    ft_find_four(matrix, col, row);
    ft_find_three(matrix, col, row);
}
int main(void){
    char str[] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
    //char str[] = "4 2 2 1 1 2 3 3 4 2 2 1 1 2 3 3";
    //char str[] = "1 2 2 2 4 1 3 2 1 2 3 2 3 2 1 2";
    int col[2][SIZE];
    int row[2][SIZE];
    int matrix[SIZE][SIZE];
    init_matrix(matrix);
    add_clue_w(str, col, row);
    draw_clue(col, row);
    ft_fillmatrix(matrix, col, row);
    draw_matrix(matrix);
    return (0);
}
