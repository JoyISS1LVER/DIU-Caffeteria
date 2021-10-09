#include<stdio.h>
#include<string.h>
#include<conio.h>
//declaring Global Variable//
int total=0;
int x;
//The Menu Function//
void list()
{
    struct food
     {
         int id;
       char name[100];
       char price[100];

     }p,q,r,s,t,u,v,w,x;

     printf("\n");
     printf("\n");

    p.id=1;
   strcpy(p.name,"Burger");
   strcpy(p.price, "80 Taka");
   printf("\t\t\t\t\t%d.",p.id);
   printf("%s......................",p.name);
   printf("%s\n",p.price);


   q.id=2;
   strcpy(q.name,"Pizza");
   strcpy(q.price, "120 Taka");
   printf("\t\t\t\t\t%d.",q.id);
   printf("%s.......................",q.name);
   printf("%s\n",q.price);

   r.id=3;
   strcpy(r.name,"Pasta");
   strcpy(r.price, "100 Taka");
   printf("\t\t\t\t\t%d.",r.id);
   printf("%s.......................",r.name);
   printf("%s\n",r.price);

   s.id=4;
   strcpy(s.name,"Chow Mein");
   strcpy(s.price,"115 Taka");
   printf("\t\t\t\t\t%d.",s.id);
   printf("%s...................",s.name);
   printf("%s\n",s.price);

   t.id=5;
   strcpy(t.name,"Vanila Chocolate");
   strcpy(t.price,"60 Taka");
   printf("\t\t\t\t\t%d.",t.id);
   printf("%s............",t.name);
   printf("%s\n",t.price);

   u.id=6;
   strcpy(u.name,"Mango Juice");
   strcpy(u.price, "90 Taka");
   printf("\t\t\t\t\t%d.",u.id);
   printf("%s.................",u.name);
   printf("%s\n",u.price);

   v.id=7;
   strcpy(v.name,"Lassi");
   strcpy(v.price, "100 Taka");
   printf("\t\t\t\t\t%d.",v.id);
   printf("%s.......................",v.name);
   printf("%s\n",v.price);

   w.id=8;
   strcpy(w.name,"Cold Coffee");
   strcpy(w.price, "60 Taka");
   printf("\t\t\t\t\t%d.",w.id);
   printf("%s.................",w.name);
   printf("%s\n",w.price);

   x.id=9;
   strcpy(x.name,"Drinks(Bottle)");
   strcpy(x.price, "15 Taka");
   printf("\t\t\t\t\t%d.",x.id);
   printf("%s..............",x.name);
   printf("%s\n",x.price);
   printf("\n");
   printf("\n");



}
//The Manager Function//
void pass()
{

    char name[20];
    char password[10];
    printf("\n               Enter Username: ");
    scanf("%s",name);
    printf("\n               Enter Password: ");
    scanf("%s",password);

    if (strcmp(name, "Joy") == 0 && strcmp(password, "unlucky") == 0)
    {
        printf("\n\n");
        printf("\t\t\t\t        ////  Welcome Manager \\\\\\\\ \n\n");


        printf("\t\t\t\t              Total Order %d\n",x);
        printf("\t\t\t\t              Total Sell %d taka\n",total);

    }


    else
      printf("       The user name or password you entered is invalid.\n");


getch();

}
//The Order Function//
void order()
{
    int choice,quantity;
    printf("How many menus will order? ");
    scanf("%d",&x);
    printf("\n\n");
    int i;
    for(i=0;i<x;i++)
    {
       printf("choice menu number ");
       scanf("%d",&choice);
          if(choice==1)
    {
        printf("Enter quantity : ");
	    scanf("%d", &quantity);
	    total=total+quantity*80;
	    printf("\t\t\t\t\tYour total amount is %d Taka.\n\n\n",total);
    }
    else if(choice==2)
     {
        printf("Enter quantity : ");
	    scanf("%d", &quantity);
	    total=total+quantity*120;
	    printf("\t\t\t\t\tYour total amount is %d Taka.\n\n\n",total);
    }
     else if(choice==3)
     {
        printf("Enter quantity : ");
	    scanf("%d", &quantity);
	    total=total+quantity*100;
	    printf("\t\t\t\t\tYour total amount is %d Taka.\n\n\n",total);
    }
    else if(choice==4)
     {
        printf("Enter quantity : ");
	    scanf("%d", &quantity);
	    total=total+quantity*115;
	    printf("\t\t\t\t\tYour total amount is %d Taka.\n\n\n",total);
    }
    else if(choice==5)
     {
        printf("Enter quantity : ");
	    scanf("%d", &quantity);
	    total=total+quantity*60;
	    printf("\t\t\t\t\tYour total amount is %d Taka.\n\n\n",total);
     }
     else if(choice==6)
     {
        printf("Enter quantity : ");
	    scanf("%d", &quantity);
	    total=total+quantity*90;
	    printf("\t\t\t\t\tYour total amount is %d Taka.\n\n\n",total);
    }
    else if(choice==7)
     {
        printf("Enter quantity : ");
	    scanf("%d", &quantity);
	    total=total+quantity*100;
	    printf("\t\t\t\t\tYour total amount is %d Taka.\n\n\n",total);
    }
    else if(choice==8)
     {
        printf("Enter quantity : ");
	    scanf("%d", &quantity);
	    total=total+quantity*60;
	    printf("\t\t\t\t\tYour total amount is %d Taka.\n\n\n",total);
    }
    else if(choice==9)
     {
        printf("Enter quantity : ");
	    scanf("%d", &quantity);
	    total=total+quantity*15;
	    printf("\t\t\t\t\tYour total amount is %d Taka.\n\n\n",total);
    }
    else
        printf("Wrong keywords\n");

    }
}

//Exit Function//
void exit()
  {
     printf("\n\n");
     printf("\t\t\t\t                  Thank You Very Much          \n ");
     printf("\t\t\t\t            +============================+          \n\n");
     printf("\t\t\t\t               && Please come again. && \n\n");

  }

  //The Main Function //

int main()
{
    int i=0;

    do{
            int a;
   printf("\t\t\t\t\t\n                                        :::::::::::::::::::::::::::::::::::::");
   printf("\t\t\t\t\t\n                                        ::                                 ::");
   printf("\t\t\t\t\t\n                                        ::     @@@@@@@@@@@@@@@@@@@@@@@     ::");
   printf("\t\t\t\t\t\n                                        ::     @                     @     ::");
   printf("\t\t\t\t\t\n                                        ::     @     WELCOME TO      @     ::");
   printf("\t\t\t\t\t\n                                        ::     @                     @     ::");
   printf("\t\t\t\t\t\n                                        ::     @ DAFFODIL CAFETERIA  @     ::");
   printf("\t\t\t\t\t\n                                        ::     @                     @     ::");
   printf("\t\t\t\t\t\n                                        ::     @@@@@@@@@@@@@@@@@@@@@@@     ::");
   printf("\t\t\t\t\t\n                                        ::                                 ::");
   printf("\t\t\t\t\t\n                                        :::::::::::::::::::::::::::::::::::::\n\n");

    printf("\t\t\t\t\tPress =1= View Food Menu and Drinks Menu\n");
    printf("\t\t\t\t\tPress =2= For Order\n");
    printf("\t\t\t\t\tPress =3= Manager\n");
    printf("\t\t\t\t\tPress =0= For Exit\n\n\n");
    printf("\t\t\t\t\tPress Your Choice:: ");
    scanf("%d",&a);

    switch (a)
    {
        case 1:
           list();
        break;

        case 2:
            order();
        break;

        case 3:
             pass();
        break;

        case 0:
            exit();
        break;

        default:
     printf("Invalid Number");

    }
    i++;
}
while(i<4);
}
