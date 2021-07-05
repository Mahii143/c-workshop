#include<stdio.h>
#include<string.h>


int main()
{
    //initialize
    int i,ctr,j;

    //array of size 1000 character
    char a[1000];

    //Get input of sentance
    scanf("%[^\n]",&a);

    //Two Dimensional Array
    char str1[100][100];

    //ctr variable for rows, j for columns
    ctr=0,j=0;
    for(i=0;i<strlen(a);i++)
    {
        //check if the character is a space or Null
        if (a[i]==' ' || a[i]=='\0')
        {
            //if true the row is finished to move on to the next row finish the row with a NULL character
            str1[ctr][j] = '\0';
            //move on to next row
            ctr++;
            //reset the column value to 0
            j=0;
        }
        else
        {
            //If false insert the character inside the 2-Dimensional array
            str1[ctr][j] = a[i];
            //Increase the column for next character to insert
            j++;
        }
    }

    //print all words in next lines
    for (int i=0;i<=ctr;i++)
    {
        printf("%s\n",str1[i]);
    }

    return 0;
}
