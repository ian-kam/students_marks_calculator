#include<stdio.h>
int main()
{
    int cat, exam, total;
    printf("enter cat marks:");
    scanf("%d",&cat);
    printf("enter exam marks:");
    scanf("%d",&exam);
    total = cat + exam;
    printf("total score %d\n",total);
    if(total >=70)
    {
        printf("GRADE A:");
    }
    else if(total >=60)
{
    printf("GRADE B");
}
else if(total >=50)
{
    printf("GRADE C");
}
else if(total >=40)
{
    printf("GRADE D");
}
else
{
    printf("GRADE F");
}
}