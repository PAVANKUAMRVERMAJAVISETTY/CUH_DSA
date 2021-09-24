#include<stdio.h>

int main()

{


int i,j,m,n,x,flag = 0;

printf("How Many Number of rows \n");
scanf("%d", &m);

printf("How Many Number of columns \n");
scanf("%d", &n);

int arr[m][n];

printf("Enter The Number Of elments\n");
for (i = 0; i < m; i++)
{
    for (j = 0; j < n; j++)
    {
      scanf("%d", &arr[i][j]);
    }
}

printf("What letter are you lookiong for? ");
scanf("%d", &x);


for (i = 0; i < m; i++)
{
    for (j = 0; j < n; j++)
    {
        if (arr[i][j] == x)
        {
           printf("%d is present at (%d , %d) times in array.\n", x, i, j);
           flag = 1;
        }
    }
}

if (flag == 0)
    printf("%c is not present in array.\n", x);

return 0;
}
