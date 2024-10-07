#include <stdio.h>
#include <stdlib.h>

int matrix[3][3][3] ;

void inputMatrix(int matrix[2][3][3], int index);
void displayMatrix(int matrix[2][3][3], int index);
void addMatrix(int matrix[2][3][3]);
void subtractMatrix(int matrix[2][3][3]) ;
void multiplyMatrix(int matrix[2][3][3]);
void transposeMatrix(int matrix[2][3][3], int index); 
int main(){
    int exit = 0;
do{
    int choice;
    printf("Input first matrix : \n");
    inputMatrix(matrix, 0); // input first matrix
    displayMatrix(matrix, 0); // display first matrix
    printf("Input Second matrix : \n");
    inputMatrix(matrix, 1); // input second matrix
    displayMatrix(matrix, 1); // display second matrix

    printf("Select the function you want to perform on the matrix: \n");
    printf("1. Addition \n");
    printf("2. Subtraction \n");
    printf("3. Multiplication \n");
    printf("4. Transpose \n");
    printf("0. exit\n : ");
    scanf("%d", &choice);

    switch (choice){
        case 1:
            addMatrix(matrix);
            break;
        case 2:
        subtractMatrix(matrix);
            break;
        case 3:
        multiplyMatrix(matrix);
        break;

        case 4:
        transposeMatrix(matrix , 0);
        transposeMatrix(matrix , 1);

        case 0: 
         exit = 1;
    }
} while (exit != 1);

    return 0;
}

void inputMatrix(int matrix[2][3][3], int index) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element [%d][%d] for matrix %d: ", i, j, index);
            scanf("%d", &matrix[index][i][j]);
        }
    }
}

void displayMatrix(int matrix[2][3][3], int index) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[index][i][j]);
        }
        printf("\n");
    }
}
void addMatrix(int matrix[2][3][3]) {
    int result[3][3];

    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[3][i][j] = matrix[0][i][j] + matrix[1][i][j];
        }
    }
    displayMatrix(matrix, 3);
}
void subtractMatrix(int matrix[2][3][3]) {
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[3][i][j] = matrix[0][i][j] - matrix[1][i][j];
        }
    }
    displayMatrix(matrix, 3);
}

void multiplyMatrix(int matrix[2][3][3]) {

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                matrix[3][i][k] += matrix[0][i][k] * matrix[1][k][j];
            }
        }
    }
    displayMatrix(matrix , 3);

  
}
void transposeMatrix(int matrix[2][3][3], int index) {
    

    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[3][i][j] = matrix[index][j][i];
        }
    }

    displayMatrix(matrix , 3);

    
}