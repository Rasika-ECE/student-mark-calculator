// c programme to calculate student mark,grade,toal,average
#include <stdio.h>

int main() {
    char name [20];
    int english,physics,chemistry,maths;
    printf("**Programme to read student's mark and to calculate student's total, average & grade**\n");
    
    printf("\nEnter a Student Name:");
    scanf("%s",&name);

    printf("\nEnter English Mark:");
    scanf("%d",&english);
    printf("enter Physics Mark:");
    scanf("%d",&physics);
    printf("Enter Chemistry Mark:");
    scanf("%d",&chemistry);
    printf("Enter Maths Mark:");
    scanf("%d",&maths);

    int total;
    float average;
    total=english+physics+chemistry+maths;
    average=total/4.0;
    printf("\nTotal=%d",total);
    printf("\nAverage=%.2f",average);

    if(average>=90)
        printf("\nGrade=S");
    else if(average>80)
        printf("Grade=A+");
    else if(average>=70)
        printf("Grade=A");
    else if(average>=60)
        printf("Grade=B");
    else if(average>=50)
    printf("Grade=C");
    else 
    printf("NO GRAGE");
    return 0;
}

    
    
    
    
       