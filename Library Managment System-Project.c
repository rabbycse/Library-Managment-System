#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct library
{
    int id;
    char name[50];
    char author[50];
    int year;
    float price;
};
struct library *book;
int count=0;

void main()
{

    int choice;
    printf("\n\t@@@@@@@@@ LIBRARY MANAGEMENT SYSTEM @@@@@@@@@ ");
    printf("\n\t\t\tCSE, DIU");
    printf("\n\n     ____________________________________________________");

    printf("\n\n\n\t Press any key continue... ");
    getch();

    book=(struct library*)malloc(sizeof(struct library));


    do
    {
        printf("\n\n\t\t###### Main Menu #######");
        printf("\n\t\t#   1.Add Book         #");
        printf("\n\t\t#   2.View All Books   #");
        printf("\n\t\t#   3.Search Book      #");
        printf("\n\t\t#   4.Remove Book      #");
        printf("\n\t\t#   5.Update Book      #");
        printf("\n\t\t#   6.Exit             #");
        printf("\n\t\t########################");
        printf("\n\t\tEnter your choice:");

        scanf("%d",&choice);

        if (1 <= choice && choice <= 5)
        {
            switch(choice)
            {
              case 1:
                  addBook();
                  break;

              case 2:
                  viewAllBook();
                  break;

              case 3:
                  searchBook();
                  break;

              case 4:
                  removeBook();
                  break;

              case 5:
                  updateBook();
                  break;

              default:
				printf("Invalid choice.  Enter again.\n\n");
				break;

            }

        }

    }while (choice!=6);

}

void addBook()
{

    printf("\n\t\t### Add New Book Details ###");
    printf("\n\t\t# Enter Book Id : ");
    scanf("%d",&book[count].id);
    printf("\t\t# Enter Book Name : ");
    scanf("%s",&book[count].name);
    printf("\t\t# Enter Book Author : ");
    scanf("%s",&book[count].author);
    printf("\t\t# Enter Book Price : ");
    scanf("%f",&book[count].price);
    printf("\t\t# Enter Book Year : ");
    scanf("%d",&book[count].year);
    count++;
    printf("\t\t############################");

}

void viewAllBook()
{

    int i;

    printf(" \n\t\t+@@@@@@@@@@@@@ View All Book @@@@@@@@@@@@@+");
    printf(" \n\t\t|-----------------------------------------|");
    printf(" \n\t\t|Id-BookNAME-BookAUTHOR-BookPRICE-BookYEAR|");
    printf(" \n\t\t|-----------------------------------------|");

    for( i=0;i<count;i++)
    {
        printf("\n\t\t|%d",book[i].id);
        printf("\t%s",book[i].name);
        printf("\t%s",book[i].author);
        printf("\t  %.f",book[i].price);
        printf("\t   %d   |",book[i].year);
    }
    printf(" \n\t\t+=========================================+");

}

void searchBook()
{

    int i;
    char bname[50];
    printf("\n\n\t\tEnter Book Name To be Search : ");
    scanf("%s",&bname);

    for(i=0;i<count;i++)
    {
        if(stricmp(book[i].name,bname)==0)
        {
          printf("\n\t\t#### Search Book Details ####");
          printf("\n\t\t# Book Id : %d",book[i].id);
          printf("\n\t\t# Book Name : %s",book[i].name);
          printf("\n\t\t# Book Author : %s",book[i].author);
          printf("\n\t\t# Book Price : %.f",book[i].price);
          printf("\n\t\t# Book Year : %d\n",book[i].year);
          printf("\t\t#############################");


        }

    }

}

void removeBook()
{

    int i,j;
    char bname[50];
    printf("\n\n\t\tEnter Book Name To be Remove : ");
    scanf("%s",&bname);

    for(i=0;i<count;i++)
    {
        if(stricmp(book[i].name,bname)==0)
        {
          printf("\n\t\t#### Remove Book Details ####");
          printf("\n\t\t@ Book Id : %d",book[i].id);
          printf("\n\t\t@ Book Name : %s",book[i].name);
          printf("\n\t\t@ Book Author : %s",book[i].author);
          printf("\n\t\t@ Book Price : %.f",book[i].price);
          printf("\n\t\t@ Book Year : %d\n",book[i].year);
          printf("\t\t##############################");
        for(j=i;j<count-1;j++)
            book=book+1;
         count--;
         return 0;

        }



    }

}

void updateBook()
{

    int i,j;
    char bname[50];
    printf("\n\n\t\tEnter Book Name To be Remove & Update : ");
    scanf("%s",&bname);

    for(i=0;i<count;i++)
    {
        if(stricmp(book[i].name,bname)==0)
        {
          printf("\n\t\t#### Remove Book Details & Update ####");
          printf("\n\t\t@ Book Id : %d",book[i].id);
          printf("\n\t\t@ Book Name : %s",book[i].name);
          printf("\n\t\t@ Book Author : %s",book[i].author);
          printf("\n\t\t@ Book Price : %.f",book[i].price);
          printf("\n\t\t@ Book Year : %d\n",book[i].year);
          printf("\t\t######################################");
        for(j=i;j<count-1;j++)
            book=book+1;
         count--;

          printf("\n\n\t\t### Add Update Book Details ###");
          printf("\n\t\t# Enter Book Id : ");
          scanf("%d",&book[count].id);
          printf("\t\t# Enter Book Name : ");
          scanf("%s",&book[count].name);
          printf("\t\t# Enter Book Author : ");
          scanf("%s",&book[count].author);
          printf("\t\t# Enter Book Price : ");
          scanf("%f",&book[count].price);
          printf("\t\t# Enter Book Year : ");
          scanf("%d",&book[count].year);
          count++;
          printf("\t\t###############################");
          return 0;

        }



    }

}



