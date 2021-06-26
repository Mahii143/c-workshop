#include<stdio.h>
#include<stdlib.h>
static double ave;
static double firstyear[6]={0,0,0,0,0,0};
static int choice;

void biomaths()
{
    int tamil11,english11,maths11,physics11,chemistry11,biology11;
    printf("Enter your Language marks: \n");
    scanf("%d",&tamil11);
    printf("Enter your English marks: \n");
    scanf("%d",&english11);
    printf("Enter your Maths marks: \n");
    scanf("%d",&maths11);
    printf("Enter your physics marks: \n");
    scanf("%d",&physics11);
    printf("Enter your chemistry marks: \n");
    scanf("%d",&chemistry11);
    printf("Enter your biology marks: \n");
    scanf("%d",&biology11);
    firstyear[0] += ((double)tamil11/(double)90*(double)100)*(double)((double)20/(double)100);
    firstyear[1] += ((double)english11/(double)90*(double)100)*(double)((double)20/(double)100);
    firstyear[2] += ((double)maths11/(double)90*(double)100)*(double)((double)20/(double)100);
    firstyear[3] += ((double)physics11/(double)70*(double)100)*(double)((double)20/(double)100);
    firstyear[4] += ((double)chemistry11/(double)70*(double)100)*(double)((double)20/(double)100);
    firstyear[5] += ((double)biology11/(double)70*(double)100)*(double)((double)20/(double)100);
}
void purescience()
{
    int tamil11,english11,physics11,chemistry11,botany11,zoology11;
    printf("Enter your Language marks: \n");
    scanf("%d",&tamil11);
    printf("Enter your English marks: \n");
    scanf("%d",&english11);
    printf("Enter your physics marks: \n");
    scanf("%d",&physics11);
    printf("Enter your chemistry marks: \n");
    scanf("%d",&chemistry11);
    printf("Enter your botany marks: \n");
    scanf("%d",&botany11);
    printf("Enter your zoology marks: \n");
    scanf("%d",&zoology11);
    firstyear[0] += ((double)tamil11/(double)90*(double)100)*(double)((double)20/(double)100);
    firstyear[1] += ((double)english11/(double)90*(double)100)*(double)((double)20/(double)100);
    firstyear[2] += ((double)physics11/(double)70*(double)100)*(double)((double)20/(double)100);
    firstyear[3] += ((double)chemistry11/(double)70*(double)100)*(double)((double)20/(double)100);
    firstyear[4] += ((double)zoology11/(double)70*(double)100)*(double)((double)20/(double)100);
    firstyear[5] += ((double)botany11/(double)70*(double)100)*(double)((double)20/(double)100);
}


void tenth()
{
    int tamil10,english10,maths10,science10,social10;
    printf("Enter your Language marks: \n");
    scanf("%d",&tamil10);
    printf("Enter your English marks: \n");
    scanf("%d",&english10);
    printf("Enter your Maths marks: \n");
    scanf("%d",&maths10);
    printf("Enter your Science marks: \n");
    scanf("%d",&science10);
    printf("Enter your Social marks: \n");
    scanf("%d",&social10);
    int tenth_marks[5] = {tamil10,english10,maths10,science10,social10};
    for (int i=0;i<5;i++)
    {
        for (int j=i+1;j<5;j++)
        {
            if (tenth_marks[i]<tenth_marks[j])
            {
                int t = tenth_marks[i];
                tenth_marks[i] = tenth_marks[j];
                tenth_marks[j] = t;
            }
        }
    }
    int tenthsum=0;
    for (int i=0;i<3;i++)
    {
        tenthsum+=tenth_marks[i];
    }
    ave = (double)tenthsum/(double)3;
    ave = ave/(double)2;
}


void group()
{
    printf("BioMaths(1) or Pure science(2) ?\n");
    printf("Enter your choice: \n");
    scanf("%d",&choice);
    if (choice == 1)
    {
        printf("Note: Enter only theory marks of HSC first year - 11TH !!!\n");
        biomaths();
    }
    else if (choice==2)
    {
        printf("Note: Enter only theory marks of HSC first year - 11TH !!!\n");
        purescience();
    }
    else
    {
        printf("Sorry wrong choice!!!");
        group();
    }

}

int practicals()
{
    if (choice == 1)
    {
        int tamil12,english12,maths12,physics12,chemistry12,biology12;
        printf("\t!!! 12 th marks !!!\nNote: For Languages enter internal marks (out of 10)\nFor practical subjects enter practical marks (out of 30)\n");
        printf("Enter your language internal mark (out of 10): \n");
        scanf("%d",&tamil12);
        firstyear[0]+=(double)tamil12*(double)3;
        printf("Enter your English internal mark (out of 10): \n");
        scanf("%d",&english12);
        firstyear[1]+=(double)english12*(double)3;
        printf("Enter your Maths internal mark (out of 10): \n");
        scanf("%d",&maths12);
        firstyear[2]+=(double)maths12*(double)3;
        printf("Enter your physics practical mark (out of 30): \n");
        scanf("%d",&physics12);
        firstyear[3]+=(double)physics12;
        printf("Enter your chemistry practical mark (out of 30): \n")
        ;scanf("%d",&chemistry12);
        firstyear[4]+=(double)chemistry12;
        printf("Enter your biology practical mark (out of 30): \n");
        scanf("%d",&biology12);
        firstyear[5]+=(double)biology12;
    }
    else if (choice == 2)
    {
        int tamil12,english12,physics12,chemistry12,botany12,zoology12;
        printf("\t!!! 12 th marks !!!\nNote: For Languages enter internal marks (out of 10)\nFor practical subjects enter practical marks (out of 30)\n");
        printf("Enter your language internal mark (out of 10): \n");
        scanf("%d",&tamil12);
        firstyear[0]+=(double)tamil12*(double)3;
        printf("Enter your English internal mark (out of 10): \n");
        scanf("%d",&english12);
        firstyear[1]+=(double)english12*(double)3;
        printf("Enter your physics practical mark (out of 30): \n");
        scanf("%d",&physics12);
        firstyear[2]+=(double)physics12;
        printf("Enter your chemistry practical mark (out of 30): \n");
        scanf("%d",&chemistry12);
        firstyear[3]+=(double)chemistry12;
        printf("Enter your botany practical mark (out of 30): \n");
        scanf("%d",&botany12);
        firstyear[4]+=(double)botany12;
        printf("Enter your zoology practical mark (out of 30): \n");
        scanf("%d",&zoology12);
        firstyear[5]+=(double)zoology12;
    }
}

int main()
{
    printf("HSC Second Year 2021 Batch Mark Calculator\nMARKS:\n");
    double tenth_average_mark;
    tenth();
    if (ave>0 && ave<=50)
    {
        for (int i=0;i<6;i++)
        {
            firstyear[i] = ave;
        }
        group();
    }

    else
    {
        printf("Check your marks and re enter it!!!");
        tenth();
    }
    printf("Tenth 50 percent mark is: %lf\n",ave);
    practicals();
    int tot = 0;
    for (int i=0;i<6;i++)
    {
        tot+= (int)firstyear[i];
    }
    printf("total marks %d",tot);

    return 0;
}
///
///
///
///
///
///
///
///
