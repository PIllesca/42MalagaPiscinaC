#include <unistd.h>
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
    int rd = 0;
    int cd = 0;
    while (cd < SIZE)
    {
        rd = 0;
        while (rd < SIZE)
        {
            ft_putnumber(matrix[cd][rd]);
            ft_putchar(' ');
            rd++;
        }
        ft_putchar('\n');
        cd++;
    }
}
// Añadir las pistas
void add_clue(char *str, int col[2][SIZE], int row[2][SIZE]){
    col[UP][0] = str[0];
    col[UP][1] = str[2];
    col[UP][2] = str[4];
    col[UP][3] = str[6];
    col[DW][0] = str[8];
    col[DW][1] = str[10];
    col[DW][2] = str[12];
    col[DW][3] = str[14];
    row[LF][0] = str[16];
    row[LF][1] = str[18];
    row[LF][2] = str[20];
    row[LF][3] = str[22];
    row[RG][0] = str[24];
    row[RG][1] = str[26];
    row[RG][2] = str[28];
    row[RG][3] = str[30];
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
    int rw;
    int cl;
    cl = 0;
    while (cl < 2)
    {
        rw = 0;
        while (rw < SIZE)
        {
            ft_putnumber(col[cl][rw]);
            ft_putchar(' ');
            rw++;
        }
        ft_putchar('\n');
        cl++;
    }
    cl = 0;
    while (cl < SIZE)
    {
        ft_putnumber(row[0][cl]);
        ft_putchar(' ');
        ft_putnumber(row[1][cl]);
        ft_putchar('\n');
        cl++;
    }
}
// Inicializar la matriz
void init_matrix(int matrix[SIZE][SIZE]){
    int rw = 0;
    int cl = 0;
    while (cl < SIZE)
    {
        rw = 0;
        while (rw < SIZE)
        {
            matrix[cl][rw] = 0;
            rw++;
        }
        cl++;
    }
}
// Rellenar tamaño máximo
void ft_fillMax(int matrix[SIZE][SIZE], int col[2][SIZE], int row[2][SIZE])
{
    int i;
    int j;
    int k;

    i = 0;
    while (i < 2)
    {
        j = 0;
        while (j < SIZE)
        {
            if (col[i][j] == SIZE)
            {
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
            if (row[i][j] == SIZE)
            {
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
            j++;
        }
        i++;
    }
}
// Rellenar la matriz
void ft_fillmatrix(int matrix[SIZE][SIZE], int col[2][SIZE], int row[2][SIZE])
{
    ft_fillMax(matrix, col, row);
}
int main(void){
    char str[] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
    int col[2][SIZE];
    int row[2][SIZE];
    int matrix[SIZE][SIZE];
    init_matrix(matrix);
    draw_matrix(matrix);
    add_clue(str, col, row);
    add_clue_w(str, col, row);
    draw_clue(col, row);
    ft_fillmatrix(matrix, col, row);
    draw_matrix(matrix);
    return (0);
}
