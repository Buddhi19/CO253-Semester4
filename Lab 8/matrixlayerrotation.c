int** turn_once(int** matrix,int col,int rows){
    int stop=rows/2;
    for(int i=0;i<stop;i++){
        int temp1=matrix[i][i];
        for(int j=i;j<col-i-1;j++){
            matrix[i][j]=matrix[i][j+1];
        }
        for(int j=i;j<rows-i-1;j++){
            matrix[j][col-i-1]=matrix[j+1][col-i-1];
        }
        for(int j=col-i-1;j>i;j--){
            matrix[rows-i-1][j]=matrix[rows-i-1][j-1];
        }
        for(int j=rows-i-1;j>i+1;j--){
            matrix[j][i]=matrix[j-1][i];
        }
        matrix[i+1][i]=temp1;
    }
    return matrix;
}

void matrixRorartion(int matrix_rows, int matrix_columns, int** matrix, int r) 
{
    int** result=turn_once(matrix,matrix_columns, matrix_rows);
    
    for(int i=1;i<r;i++){
        result=turn_once(result,matrix_columns, matrix_rows);

    }
    
    for(int i=0;i<matrix_rows;i++){
        for(int j=0;j<matrix_columns;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

}