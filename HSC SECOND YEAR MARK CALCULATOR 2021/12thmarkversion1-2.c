#include<stdio.h>
#include<stdlib.h>
static double ave;
static double firstyear[6]={0,0,0,0,0,0};
static int choice;

/****************************************--------------User input--------------*******************************************************

group: (1)Bio maths / (2)pure science

sslc mark: tamil english maths science social

hsc 1st year: theory marks

           biomaths:-     tamil english maths physics chemistry biology

           purescience :- tamil english physics chemistry botany zoology


hsc 2nd Year: for language subjects-- internal marks for practical subjects-- practical marks

           biomaths:-     tamil english maths physics chemistry biology

           purescience :- tamil english physics chemistry botany zoology



1st line containes ==> choices 1 or 2
2nd line containes array of ==> sslc marks
3rd line containes array of ==> hsc first year theory marks (tam eng mat phy che bio OR tam eng phy che bot zoo)
4th line containes array of ==> hsc second year internal and practical marks (tam eng mat phy che bio OR tam eng phy che bot zoo)


example input:

1
94 95 89 87 85
83 82 81 69 67 68
10 10 10 30 30 30

output:
subject1 marks: 94.444444
subject2 marks: 94.222222
subject3 marks: 94.000000
subject4 marks: 95.714286
subject5 marks: 95.142857
subject6 marks: 95.428571




TOTAL OBTAINED MARKS: 567/600
Tenth 50 percent mark is: 46
THANK YOU FOR USING OUR CALCULATOR

*************************************************************************************************************************************/
int display()
{
    int f;
    printf("\n\n\n");
    for (int i=0;i<6;i++)
    {
        printf("subject%d marks: %lf\n",i+1,firstyear[i]);
    }
    int tot=0;
    for (int i=0;i<6;i++)
    {
        tot+=(int)firstyear[i];
    }
    printf("\n\n\n\n\TOTAL OBTAINED MARKS: %d/600\n",tot);
    printf("Tenth 50 percent mark is: %d\n",(int)ave);
    printf("THANK YOU FOR USING OUR CALCULATOR\n\n\n");
    printf("Enter 1 to try again... \n");
    printf("Enter 0 to exit...\n");
    scanf("%d",&f);
    if (f==1){
        main();
    }
    else{
        printf("THANK YOU :\) ");
    }
}
int practicals()
{
 //   printf("ENTER HSC SECOND YEAR MARKS:\n");
    int practical_marks[6];
    for (int i=0;i<6;i++){scanf("%d",&practical_marks[i]);}
    if (choice==1)
    {
     //   printf("Kindly Note you should enter in this ==> (tam(10) eng(10) mat(10) phy(30) che(30) bio(30) ) <== correct order (!only marks!)!!!\n");
        if (practical_marks[0]<11 && practical_marks[1]<11 && practical_marks[2]<11 && practical_marks[3]<31 && practical_marks[4]<31 && practical_marks[5]<31)
        {
            for (int i=0;i<3;i++){practical_marks[i]=3*practical_marks[i];}
            for (int i=0;i<6;i++)
            {
                firstyear[i]+=(int)practical_marks[i];
            }
            display();
        }
        else
        {
            printf("The marks you entered were invalid!!!\nKindly check whether you entered in (tam(10) eng(10) mat(10) phy(30) che(30) bio(30) ) correct order!!!\n");
            practicals();
        }
    }
    else if (choice==2)
    {

   //     printf("Kindly Note you should enter in this ==> (tam(10) eng(10) phy(30) che(30) bot(30) zoo(30) ) <== correct order (!only marks!)!!!\n");
        if (practical_marks[0]<11 && practical_marks[1]<11 && practical_marks[2]<31 && practical_marks[3]<31 && practical_marks[4]<31 && practical_marks[5]<31)
        {
            for (int i=0;i<2;i++){practical_marks[i]=3*practical_marks[i];}
            for (int i=0;i<6;i++)
            {
                firstyear[i]+=practical_marks[i];
            }
            display();
        }
        else
        {
            printf("The marks you entered were invalid!!!\nKindly check whether you entered in (tam(10) eng(10) phy(30) che(30) bot(30) zoo(30) ) correct order!!!\n");
            practicals();
        }
    }
}
int theory()
{
    //printf("ENTER HSC FIRST YEAR MARKS: \n");
    int theory_marks[6];
    for (int i=0;i<6;i++)
    {
        scanf("%d",&theory_marks[i]);
    }
    if (choice == 1 && (theory_marks[0]<91 && theory_marks[1]<91 && theory_marks[2]<91 && theory_marks[3]<71 && theory_marks[4]<71 && theory_marks[5]<71))
    {
        firstyear[0] += ((double)theory_marks[0]/(double)90*(double)100)*(double)((double)20/(double)100);
        firstyear[1] += ((double)theory_marks[1]/(double)90*(double)100)*(double)((double)20/(double)100);
        firstyear[2] += ((double)theory_marks[2]/(double)90*(double)100)*(double)((double)20/(double)100);
        firstyear[3] += ((double)theory_marks[3]/(double)70*(double)100)*(double)((double)20/(double)100);
        firstyear[4] += ((double)theory_marks[4]/(double)70*(double)100)*(double)((double)20/(double)100);
        firstyear[5] += ((double)theory_marks[5]/(double)70*(double)100)*(double)((double)20/(double)100);
        practicals();
    }
    else if (choice==2 && (theory_marks[0]<91 && theory_marks[1]<91 && theory_marks[2]<71 && theory_marks[3]<71 && theory_marks[4]<71 && theory_marks[5]<71)){
        firstyear[0] += ((double)theory_marks[0]/(double)90*(double)100)*(double)((double)20/(double)100);
        firstyear[1] += ((double)theory_marks[1]/(double)90*(double)100)*(double)((double)20/(double)100);
        firstyear[2] += ((double)theory_marks[2]/(double)70*(double)100)*(double)((double)20/(double)100);
        firstyear[3] += ((double)theory_marks[3]/(double)70*(double)100)*(double)((double)20/(double)100);
        firstyear[4] += ((double)theory_marks[4]/(double)70*(double)100)*(double)((double)20/(double)100);
        firstyear[5] += ((double)theory_marks[5]/(double)70*(double)100)*(double)((double)20/(double)100);
        practicals();
    }
    else
    {
        printf("PLEASE CHECK WHETHER YOU ENTERED CORRECT THEORY MARKS (FOR LANGUAGE SUBJECTS==>UPTO 90 || FOR PRACTICAL SUBJECTS==>UPTO 70) !!!");
        theory();
    }
}

int check()
    {
        if (ave>0 && ave<=50)
        {
            for (int i=0;i<6;i++)
            {
                firstyear[i] = (int)ave;
            }
            theory();
        }

        else
        {
            printf("Check your marks and re enter it!!!");
            tenth();
        }
}

int tenth()
{
    //printf("ENTER YOUR SSLC MARKS: \n");
    int tenth_marks[5];
    for (int i=0;i<5;i++){scanf("%d",&tenth_marks[i]);}
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
    check();
}
void group()
{
    //printf("BioMaths(1) or Pure science(2) ?\n");
    //printf("Enter your choice: \n");
    scanf("%d",&choice);

    if (choice != 1 && choice !=2)
    {
        printf("Sorry wrong choice!!!");
        group();
    }
    else
    {
        tenth();
    }
}
int main()
{
    printf("HSC Second Year 2021 Batch Mark Calculator\nMARKS:\n");
    group();
    return 0;
}
