# include<stdio.h>

int main(){
    int i,j,n;
    printf("Enter Number:");
    scanf("%d",&n);
    for(i=0;j<3;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
