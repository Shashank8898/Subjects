#include<stdio.h>

int main(){
    int r,c;
    printf("Enter number of rows and columns :");
    scanf("%d %d",&r,&c);

    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter element");
            scanf("%d",&a[i][j]);
        }
    }

    //Count for non-zero elements
    int count = 0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]!=0) count++; 
        }
    }

    

    //Making Sparse matrix              //Number of columns of a sparse matrix will always be 3
    int sparse[count+1][3];            


    //Making 1st row
    sparse[0][0]=r;
    sparse[0][1]=c;
    sparse[0][2]=count;
    

    int k=1;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]!=0){
                sparse[k][0]=i;
                sparse[k][1]=j;
                sparse[k][2]=a[i][j];
                k++;
            }
        }
    }


    //Printing sparse matrix
    printf("The entered sparse matrix is");
    printf("Row Column Value");
    for(int i=0;i<count+1;i++){
        printf("%d %d %d \n",sparse[i][0],sparse[i][1],sparse[i][2]);
    }

    return 0;
}