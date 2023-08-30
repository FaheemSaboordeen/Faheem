#include <stdio.h>
#include <stdlib.h>

struct customer_details{char address[1000];
char name1[100];};
int main(){
int p, m,number;        // For the front page * designing
for(p=1;p<=12;p++) {
for(m=1;m<=p;m++) {
printf("*");
}
printf("\n");
}
    printf("\t\t\t*********************************\n");
    printf("\t\t\tWELCOME TO ONLINE PHARMACY SYSTEM\n");
    printf("\t\t\t*********************************\n");
    int x, y,e;

for(x=12;x>0;x--) {
for(y=x;y>0;y--) {
printf("*");
}
printf("\n");
}
printf("-press any number to enter-");
scanf("%d",&e);

     system("cls");

mainmenue:         // (mainmenue)To select  your district

     printf("\t\t\t*********************************\n");
      printf("\t\t\t*********************************\n");
         printf("\t\t01.Ampara\n");
         printf("\t\t02.Anuradhapura\n");
         printf("\t\t03.Badulla\n");
         printf("\t\t04.Batticaloa\n");
         printf("\t\t05.Colombo\n");
         printf("\t\t06.Galle\n");
         printf("\t\t07.Gampaha\n");
         printf("\t\t08.Hambantota\n");
         printf("\t\t09.Jaffna\n");
         printf("\t\t10.Kalutara\n");
         printf("\t\t11.Kandy\n");
         printf("\t\t12.Kegalle\n");
         printf("\t\t13.Kilinochchi\n");
         printf("\t\t14.Kurunegala\n");
         printf("\t\t15.Mannar\n");
         printf("\t\t16.Matale\n");
         printf("\t\t17.Matara\n");
         printf("\t\t18.Monaragala\n");
         printf("\t\t19.Mullaitivu\n");
         printf("\t\t20.Nuwara Eliya\n");
         printf("\t\t21.Polonnaruwa\n");
         printf("\t\t22.Puttalam\n");
         printf("\t\t23.Ratnapura\n");
         printf("\t\t24.Trincomalee\n");
         printf("\t\t25.Vavuniya\n");

         int district,pharmacy[250],service[25];
          printf("\t\t\t*********************************\n");
          printf("\t\tselect your district: ");
          scanf("%d", &district);
          printf("\t\t\t*********************************\n");

  system("cls");

switch(district)
{
case 1:  // case-01 for 1st district,listed pharmacy will show after you selected district above ,

printf("\t\t\t You have selected Ampara district\n");
printf("\t\t\t<*********************************>\n\n\n");

         printf("\t\t01.Royal pharmacy\n");
         printf("\t\t02.Lanka pharmacy\n");
         printf("\t\t03.City pharmacy\n");
         printf("\t\t04.Dilani pharmacy\n");
         printf("\t\t05.Ishara pharmacy\n\n\n");
         printf("\t<***-----***************-----*******>\n");
         printf("\t\tselect the pharmacy:");
        scanf("%d", &pharmacy[1]);                    //we have to select one pharmacy here
          system("cls");
switch(pharmacy[1]){
case 1:
printf("You have selected Royal pharmacy \n");                   // among other pharmacy selected pharmacy will be shown

mainmenue2:

 printf("\t\t01.purchase new medicine\n");                     //you can choose here relevant service
 printf("\t\t02.about our pharmacy\n");
 printf("\t\t03.go to main menu\n");
 printf("select the service by entering (1/2) : ");
scanf("%d", &service[1]);
 system("cls");
switch(service[1]){
case 1:
printf("\t\t********************* \n");
printf("\t\tpurchase new medicine \n");
printf("\t\t********************* \n\n\n");
          int medname,select;


area1:
         printf("\t\t1.ASPIRIN 2.PAINKILLERS 3.PRESSURE TABLETS 4.SUGAR TABLETS 5.BALMS\n\n\n"); //available medicines listed here
         printf("\t\t========================= \n");

        {
          int q;
         printf("\t\tSELECT medicine TYPE:");
         scanf("%d", &q);
          printf("\t\t========================= \n\n\n");
printf("\t\t************************************************************************\n");

if(q==1)
printf("\t\t Your medicine is available TOTAL PRICE=150RS. for 1 box \n");//according to your medicine selection following outputs will be displayed
else if(q==2)
printf("\t\tYour medicine is available  TOTAL PRICE=275RS for 1 card. \n");
else if(q==3)
printf("\t\tYour medicine is available TOTAL PRICE=450RS.for 1 box  \n");
else if(q==4)
printf("\t\tYour medicine is available.TOTAL PRICE=1150RS.for one card  \n");
else if(q==5)
printf("\t\tYour medicine is available.TOTAL PRICE=1150RS.  \n");
else
printf("\t\t Medicine is NOT AVAILABLE \n");

}
printf("\t\t************************************************************************\n\n");
printf("\t\t<payment method-cash on delivery>\n\n");
printf("\t\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-* \n");


{
int select,z;


printf("\t\t Do you like to confirm your order(1.Yes/2.No):");                         //you can confirm your order here
scanf("%d",&select);
printf("\t\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-* \n");
system("cls");
switch(select){
case 1:
    printf("\t\t\t*********************************\n");
    printf("\t\t\t\tORDER CONFIRMATION\n");
    printf("\t\t\t*********************************\n\n\n");

   FILE *fptr;// creating file pointer to work with files
    struct customer_details info;
    fptr = fopen("program.txt", "w");// opening file in writing mode



    printf("ENTER YOUR NAME:\n");
    scanf("%s",info.name1);

    printf("ENTER YOUR DELIVERY ADDRESS:\n");
    scanf("%s",info.address);

        if (fptr == NULL) {  // exiting program
        printf("Error!");
        exit(1);
    }
    fwrite(&info,sizeof(struct customer_details),1,fptr);

    fclose(fptr);


     fptr = fopen("program.txt", "r");
      if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }
    {
       printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-* \n\n");
printf("\t\t\tHello %s! your order successfully confirmed.\n" ,info.name1);
printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-* \n\n");
printf("\t\t\tyour medicines will be delivered to %s------------ \n\t\t\tvia our free delivery service thank you!\n", info.address);
    }
     fclose(fptr);



break;
case 2:
printf("You entered two. \n");
printf("to go back to mainmenue enter 01: \n");
scanf("%d",&z);

if(z==1)
goto mainmenue;
else
printf("Thank you!");

break;
case 3:
goto mainmenue;
break;
default :
printf("You entered a different number. \n");
}
return 0;
}






break;

case 2:                                                      // case02 for 1st district-about our pharmacy

printf("\t\t********************* \n");
printf("\t\tABOUT OUR PHARMACY \n");
printf("\t\t********************* \n");
printf("Our pharmacy established in 2015,24 hours we are open you may contact us at any time.\n\n");
printf("\t\t********************* \n");


{
int k;
printf("\t to go back press any number ");       //to go back to mainmenue (81th line )
scanf("%d", &k);
system("cls");
if(k>=0)
goto mainmenue2;
else
printf("Wrong entry! \n");
return 0;
}

break;
case 3:
goto mainmenue;
break;

default :
printf("You entered a different number. \n");
}





break;
case 2:                 //if you select 2nd pharmacy from the listed list you will be end up in mainmenue2 which is 88th line
goto mainmenue2;
break;
case 3:                 //if you select 3rd pharmacy from the listed list you will be end up in mainmenue2 which is 88th line
goto mainmenue2;
break;
case 4:                 //if you select 4th pharmacy from the listed list you will be end up in mainmenue2 which is 88th line
goto mainmenue2;
break;
case 5:                 //if you select 5th pharmacy from the listed list you will be end up in mainmenue2 which is 88th line
goto mainmenue2;
break;

default :
printf("Wrong entry! \n");


}


break;
case 2:                                                                     //in mainmenu 26th line if you select Anuradhpura district following pharmacy lists will be shown
printf("You have selected Anuradhapura district,select the pharmacy \n");
printf("\t\t\t<*********************************>\n\n\n");

         printf("\t\t01.Queens pharmacy\n");
         printf("\t\t02.Oslaka pharmacy\n");
         printf("\t\t03.Jespa pharmacy\n");
         printf("\t\t04.Jafas pharmacy\n");
         printf("\t\t05.Medicare pharmacy\n\n\n");
         printf("\t<***-----***************-----*******>\n");
         printf("\t\tselect the pharmacy:");
        scanf("%d", &pharmacy[1]);
          system("cls");
          switch(pharmacy[1]){
case 1:
goto mainmenue2;
case 2:
goto mainmenue2;
break;
case 3:
goto mainmenue2;
break;
case 4:
goto mainmenue2;
break;
case 5:
goto mainmenue2;
break;

default :
printf("Wrong entry! \n");

          }
break;
case 3:
printf("You have selected Badulla district,select the pharmacy  \n");

  printf("\t\t01.Central pharmacy\n");
         printf("\t\t02.Hijra pharmacy\n");
         printf("\t\t03.Reegal pharmacy\n");
         printf("\t\t04.Suwana pharmacy\n");
         printf("\t\t05.Tharani pharmacy\n\n\n");
         printf("\t<***-----***************-----*******>\n");
         printf("\t\tselect the pharmacy:");
        scanf("%d", &pharmacy[1]);
          system("cls");
          switch(pharmacy[1]){
case 1:
goto mainmenue2;
case 2:
goto mainmenue2;
break;
case 3:
goto mainmenue2;
break;
case 4:
goto mainmenue2;
break;
case 5:
goto mainmenue2;
break;

default :
printf("Wrong entry! \n");

          }


break;
case 4:
printf("You have selected Batticaloa district,select the pharmacy  \n");

    printf("\t\t01.Central pharmacy\n");
         printf("\t\t02.Lal pharmacy\n");
         printf("\t\t03.Sri sai pharmacy\n");
         printf("\t\t04.Suwana pharmacy\n");
         printf("\t\t05.DJ pharmacy\n\n\n");
         printf("\t<***-----***************-----*******>\n");
         printf("\t\tselect the pharmacy:");
        scanf("%d", &pharmacy[1]);
          system("cls");
          switch(pharmacy[1]){
case 1:
goto mainmenue2;
case 2:
goto mainmenue2;
break;
case 3:
goto mainmenue2;
break;
case 4:
goto mainmenue2;
break;
case 5:
goto mainmenue2;
break;

default :
printf("Wrong entry! \n");

          }



break;
case 5:
printf("You have selected Colombo district,select the pharmacy \n");

 printf("\t\t01.Central pharmacy\n");
         printf("\t\t02.Alif pharmacy\n");
         printf("\t\t03.Sheron pharmacy\n");
         printf("\t\t04.Mikka pharmacy\n");
         printf("\t\t05.Jusla pharmacy\n\n\n");
         printf("\t<***-----***************-----*******>\n");
         printf("\t\tselect the pharmacy:");
        scanf("%d", &pharmacy[1]);
          system("cls");
          switch(pharmacy[1]){
case 1:
goto mainmenue2;
case 2:
goto mainmenue2;
break;
case 3:
goto mainmenue2;
break;
case 4:
goto mainmenue2;
break;
case 5:
goto mainmenue2;
break;

default :
printf("Wrong entry! \n");

          }

break;
case 6:
printf("You have selected Galle district,select the pharmacy  \n");
printf("\t\t01.Central pharmacy\n");
         printf("\t\t02.Alif pharmacy\n");
         printf("\t\t03.Sheron pharmacy\n");
         printf("\t\t04.Mikka pharmacy\n");
         printf("\t\t05.Jusla pharmacy\n\n\n");
         printf("\t<***-----***************-----*******>\n");
         printf("\t\tselect the pharmacy:");
        scanf("%d", &pharmacy[1]);
          system("cls");
          switch(pharmacy[1]){
case 1:
goto mainmenue2;
case 2:
goto mainmenue2;
break;
case 3:
goto mainmenue2;
break;
case 4:
goto mainmenue2;
break;
case 5:
goto mainmenue2;
break;

default :
printf("Wrong entry! \n");

          }
break;
case 7:
printf("You have selected Gampaha district,select the pharmacy  \n");

 printf("\t\t01.Suhanda pharmacy\n");
         printf("\t\t02.Hiru pharmacy\n");
         printf("\t\t03.Sha pharmacy\n");
         printf("\t\t04.Osada pharmacy\n");
         printf("\t\t05.Sanith pharmacy\n\n\n");
         printf("\t<***-----***************-----*******>\n");
         printf("\t\tselect the pharmacy:");
        scanf("%d", &pharmacy[1]);
          system("cls");
          switch(pharmacy[1]){
case 1:
goto mainmenue2;
case 2:
goto mainmenue2;
break;
case 3:
goto mainmenue2;
break;
case 4:
goto mainmenue2;
break;
case 5:
goto mainmenue2;
break;

default :
printf("Wrong entry! \n");

          }

case 8:
printf("You have selected Hambantota district,select the pharmacy  \n");
 printf("\t\t01.Aloka pharmacy\n");
         printf("\t\t02.Rajya pharmacy\n");
         printf("\t\t03.Ramya pharmacy\n");
         printf("\t\t04.Osada pharmacy\n");
         printf("\t\t05.Sanith pharmacy\n\n\n");
         printf("\t<***-----***************-----*******>\n");
         printf("\t\tselect the pharmacy:");
        scanf("%d", &pharmacy[1]);
          system("cls");
          switch(pharmacy[1]){
case 1:
goto mainmenue2;
case 2:
goto mainmenue2;
break;
case 3:
goto mainmenue2;
break;
case 4:
goto mainmenue2;
break;
case 5:
goto mainmenue2;
break;

default :
printf("Wrong entry! \n");

          }

break;
case 9:
printf("You have selected Jaffna district,select the pharmacy \n");

 printf("\t\t01.Aloka pharmacy\n");
         printf("\t\t02.Rajya pharmacy\n");
         printf("\t\t03.Ramya pharmacy\n");
         printf("\t\t04.Osada pharmacy\n");
         printf("\t\t05.Sanith pharmacy\n\n\n");
         printf("\t<***-----***************-----*******>\n");
         printf("\t\tselect the pharmacy:");
        scanf("%d", &pharmacy[1]);
          system("cls");
          switch(pharmacy[1]){
case 1:
goto mainmenue2;
case 2:
goto mainmenue2;
break;
case 3:
goto mainmenue2;
break;
case 4:
goto mainmenue2;
break;
case 5:
goto mainmenue2;
break;

default :
printf("Wrong entry! \n");

          }

break;
case 10:
printf("You have selected Kalutara district,select the pharmacy  \n");
printf("\t\t01.Central pharmacy\n");
         printf("\t\t02.Lal pharmacy\n");
         printf("\t\t03.Sri sai pharmacy\n");
         printf("\t\t04.Suwana pharmacy\n");
         printf("\t\t05.DJ pharmacy\n\n\n");
         printf("\t<***-----***************-----*******>\n");
         printf("\t\tselect the pharmacy:");
        scanf("%d", &pharmacy[1]);
          system("cls");
          switch(pharmacy[1]){
case 1:
goto mainmenue2;
case 2:
goto mainmenue2;
break;
case 3:
goto mainmenue2;
break;
case 4:
goto mainmenue2;
break;
case 5:
goto mainmenue2;
break;

default :
printf("Wrong entry! \n");

          }
break;
case 11:
printf("You have selected Kandy district,select the pharmacy  \n");
printf("\t\t01.Central pharmacy\n");
         printf("\t\t02.Hijra pharmacy\n");
         printf("\t\t03.Reegal pharmacy\n");
         printf("\t\t04.Suwana pharmacy\n");
         printf("\t\t05.Tharani pharmacy\n\n\n");
         printf("\t<***-----***************-----*******>\n");
         printf("\t\tselect the pharmacy:");
        scanf("%d", &pharmacy[1]);
          system("cls");
          switch(pharmacy[1]){
case 1:
goto mainmenue2;
case 2:
goto mainmenue2;
break;
case 3:
goto mainmenue2;
break;
case 4:
goto mainmenue2;
break;
case 5:
goto mainmenue2;
break;

default :
printf("Wrong entry! \n");

          }
break;
case 12:
printf("You have selected Kegalle district,select the pharmacy  \n");
printf("\t\t01.Tissa pharmacy\n");
         printf("\t\t02.Jeewa pharmacy\n");
         printf("\t\t03.Mededile pharmacy\n");
         printf("\t\t04.Suwana pharmacy\n");
         printf("\t\t05.Tharani pharmacy\n\n\n");
         printf("\t<***-----***************-----*******>\n");
         printf("\t\tselect the pharmacy:");
        scanf("%d", &pharmacy[1]);
          system("cls");
          switch(pharmacy[1]){
case 1:
goto mainmenue2;
case 2:
goto mainmenue2;
break;
case 3:
goto mainmenue2;
break;
case 4:
goto mainmenue2;
break;
case 5:
goto mainmenue2;
break;

default :
printf("Wrong entry! \n");

          }

break;
case 13:
printf("You have selected Kilinochchi district,select the pharmacy  \n");

printf("\t\t01.Udaya pharmacy\n");
         printf("\t\t02.Jeewa pharmacy\n");
         printf("\t\t03.Nehara pharmacy\n");
         printf("\t\t04.Suwana pharmacy\n");
         printf("\t\t05.Kalyani pharmacy\n\n\n");
         printf("\t<***-----***************-----*******>\n");
         printf("\t\tselect the pharmacy:");
        scanf("%d", &pharmacy[1]);
          system("cls");
          switch(pharmacy[1]){
case 1:
goto mainmenue2;
case 2:
goto mainmenue2;
break;
case 3:
goto mainmenue2;
break;
case 4:
goto mainmenue2;
break;
case 5:
goto mainmenue2;
break;

default :
printf("Wrong entry! \n");

          }

break;
case 14:
printf("You have selected Kurunegala district,select the pharmacy  \n");

printf("\t\t01.Tissa pharmacy\n");
         printf("\t\t02.Jeewa pharmacy\n");
         printf("\t\t03.Mededile pharmacy\n");
         printf("\t\t04.Suwana pharmacy\n");
         printf("\t\t05.Tharani pharmacy\n\n\n");
         printf("\t<***-----***************-----*******>\n");
         printf("\t\tselect the pharmacy:");
        scanf("%d", &pharmacy[1]);
          system("cls");
          switch(pharmacy[1]){
case 1:
goto mainmenue2;
case 2:
goto mainmenue2;
break;
case 3:
goto mainmenue2;
break;
case 4:
goto mainmenue2;
break;
case 5:
goto mainmenue2;
break;

default :
printf("Wrong entry! \n");

          }

break;
case 15:
printf("You have selected Mannar district,select the pharmacy  \n");

printf("\t\t01.Ben pharmacy\n");
         printf("\t\t02.Leo pharmacy\n");
         printf("\t\t03.Mecaw pharmacy\n");
         printf("\t\t04.Lahiru pharmacy\n");
         printf("\t\t05.Dineth pharmacy\n\n\n");
         printf("\t<***-----***************-----*******>\n");
         printf("\t\tselect the pharmacy:");
        scanf("%d", &pharmacy[1]);
          system("cls");
          switch(pharmacy[1]){
case 1:
goto mainmenue2;
case 2:
goto mainmenue2;
break;
case 3:
goto mainmenue2;
break;
case 4:
goto mainmenue2;
break;
case 5:
goto mainmenue2;
break;

default :
printf("Wrong entry! \n");

          }


break;
case 16:
printf("You have selected Matale district,select the pharmacy  \n");

printf("\t\t01.Udaya pharmacy\n");
         printf("\t\t02.Jeewa pharmacy\n");
         printf("\t\t03.Nehara pharmacy\n");
         printf("\t\t04.Suwana pharmacy\n");
         printf("\t\t05.Kalyani pharmacy\n\n\n");
         printf("\t<***-----***************-----*******>\n");
         printf("\t\tselect the pharmacy:");
        scanf("%d", &pharmacy[1]);
          system("cls");
          switch(pharmacy[1]){
case 1:
goto mainmenue2;
case 2:
goto mainmenue2;
break;
case 3:
goto mainmenue2;
break;
case 4:
goto mainmenue2;
break;
case 5:
goto mainmenue2;
break;

default :
printf("Wrong entry! \n");

          }


break;
case 17:
printf("You have selected Matara district,select the pharmacy  \n");
printf("\t\t01.Ben pharmacy\n");
         printf("\t\t02.Leo pharmacy\n");
         printf("\t\t03.Mecaw pharmacy\n");
         printf("\t\t04.Lahiru pharmacy\n");
         printf("\t\t05.Dineth pharmacy\n\n\n");
         printf("\t<***-----***************-----*******>\n");
         printf("\t\tselect the pharmacy:");
        scanf("%d", &pharmacy[1]);
          system("cls");
          switch(pharmacy[1]){
case 1:
goto mainmenue2;
case 2:
goto mainmenue2;
break;
case 3:
goto mainmenue2;
break;
case 4:
goto mainmenue2;
break;
case 5:
goto mainmenue2;
break;

default :
printf("Wrong entry! \n");

          }

break;
case 18:
printf("You have selected Monaragala district,select the pharmacy  \n");

printf("\t\t01.Aloka pharmacy\n");
         printf("\t\t02.Rajya pharmacy\n");
         printf("\t\t03.Ramya pharmacy\n");
         printf("\t\t04.Osada pharmacy\n");
         printf("\t\t05.Sanith pharmacy\n\n\n");
         printf("\t<***-----***************-----*******>\n");
         printf("\t\tselect the pharmacy:");
        scanf("%d", &pharmacy[1]);
          system("cls");
          switch(pharmacy[1]){
case 1:
goto mainmenue2;
case 2:
goto mainmenue2;
break;
case 3:
goto mainmenue2;
break;
case 4:
goto mainmenue2;
break;
case 5:
goto mainmenue2;
break;

default :
printf("Wrong entry! \n");

          }


break;
case 19:
printf("You have selected Mullaitivu district,select the pharmacy  \n");
 printf("\t\t01.Suhanda pharmacy\n");
         printf("\t\t02.Hiru pharmacy\n");
         printf("\t\t03.Sha pharmacy\n");
         printf("\t\t04.Osada pharmacy\n");
         printf("\t\t05.Sanith pharmacy\n\n\n");
         printf("\t<***-----***************-----*******>\n");
         printf("\t\tselect the pharmacy:");
        scanf("%d", &pharmacy[1]);
          system("cls");
          switch(pharmacy[1]){
case 1:
goto mainmenue2;
case 2:
goto mainmenue2;
break;
case 3:
goto mainmenue2;
break;
case 4:
goto mainmenue2;
break;
case 5:
goto mainmenue2;
break;

default :
printf("Wrong entry! \n");

          }


break;
case 20:
printf("You have selected Nuwera Eliya district,select the pharmacy  \n");
 printf("\t\t01.Suhanda pharmacy\n");
         printf("\t\t02.Hiru pharmacy\n");
         printf("\t\t03.Sha pharmacy\n");
         printf("\t\t04.Osada pharmacy\n");
         printf("\t\t05.Sanith pharmacy\n\n\n");
         printf("\t<***-----***************-----*******>\n");
         printf("\t\tselect the pharmacy:");
        scanf("%d", &pharmacy[1]);
          system("cls");
          switch(pharmacy[1]){
case 1:
goto mainmenue2;
case 2:
goto mainmenue2;
break;
case 3:
goto mainmenue2;
break;
case 4:
goto mainmenue2;
break;
case 5:
goto mainmenue2;
break;

default :
printf("Wrong entry! \n");

          }


break;
case 21:
printf("You have selected Polonnaruwa district,select the pharmacy  \n");
  printf("\t\t01.Ideal pharmacy\n");
         printf("\t\t02.Osran pharmacy\n");
         printf("\t\t03.Sanudhi pharmacy\n");
         printf("\t\t04.Ishpa pharmacy\n");
         printf("\t\t05.Venus pharmacy\n\n\n");
         printf("\t<***-----***************-----*******>\n");
         printf("\t\tselect the pharmacy:");
        scanf("%d", &pharmacy[1]);
          system("cls");
          switch(pharmacy[1]){
case 1:
goto mainmenue2;
case 2:
goto mainmenue2;
break;
case 3:
goto mainmenue2;
break;
case 4:
goto mainmenue2;
break;
case 5:
goto mainmenue2;
break;

default :
printf("Wrong entry! \n");

          }



case 22:
printf("You have selected Puttalam district,select the pharmacy  \n");

  printf("\t\t01.Central pharmacy\n");
         printf("\t\t02.Lal pharmacy\n");
         printf("\t\t03.Sri sai pharmacy\n");
         printf("\t\t04.Suwana pharmacy\n");
         printf("\t\t05.DJ pharmacy\n\n\n");
         printf("\t<***-----***************-----*******>\n");
         printf("\t\tselect the pharmacy:");
        scanf("%d", &pharmacy[1]);
          system("cls");
          switch(pharmacy[1]){
case 1:
goto mainmenue2;
case 2:
goto mainmenue2;
break;
case 3:
goto mainmenue2;
break;
case 4:
goto mainmenue2;
break;
case 5:
goto mainmenue2;
break;

default :
printf("Wrong entry! \n");

          }


break;
case 23:
printf("You have selected Ratnapura district,select the pharmacy  \n");
printf("\t\t01.Ideal pharmacy\n");
         printf("\t\t02.Osran pharmacy\n");
         printf("\t\t03.Sanudhi pharmacy\n");
         printf("\t\t04.Ishpa pharmacy\n");
         printf("\t\t05.Venus pharmacy\n\n\n");
         printf("\t<***-----***************-----*******>\n");
         printf("\t\tselect the pharmacy:");
        scanf("%d", &pharmacy[1]);
          system("cls");
          switch(pharmacy[1]){
case 1:
goto mainmenue2;
case 2:
goto mainmenue2;
break;
case 3:
goto mainmenue2;
break;
case 4:
goto mainmenue2;
break;
case 5:
goto mainmenue2;
break;

default :
printf("Wrong entry! \n");

          }


break;
case 24:
printf("You have selected Trincomalee district,select the pharmacy  \n");
printf("\t\t01.Abi pharmacy\n");
         printf("\t\t02.Newcare pharmacy\n");
         printf("\t\t03.Sanudhi pharmacy\n");
         printf("\t\t04.Ishpa pharmacy\n");
         printf("\t\t05.Venus pharmacy\n\n\n");
         printf("\t<***-----***************-----*******>\n");
         printf("\t\tselect the pharmacy:");
        scanf("%d", &pharmacy[1]);
          system("cls");
          switch(pharmacy[1]){
case 1:
goto mainmenue2;
case 2:
goto mainmenue2;
break;
case 3:
goto mainmenue2;
break;
case 4:
goto mainmenue2;
break;
case 5:
goto mainmenue2;
break;

default :
printf("Wrong entry! \n");

          }


break;
case 25:
printf("You have selected Vavuniya district,select the pharmacy  \n");

printf("\t\t01.Pills pharmacy\n");
         printf("\t\t02.Indirajith pharmacy\n");
         printf("\t\t03.Sanudhi pharmacy\n");
         printf("\t\t04.Ishara pharmacy\n");
         printf("\t\t05.Ratnapura pharmacy\n\n\n");
         printf("\t<***-----***************-----*******>\n");
         printf("\t\tselect the pharmacy:");
        scanf("%d", &pharmacy[1]);
          system("cls");
          switch(pharmacy[1]){
case 1:
goto mainmenue2;
case 2:
goto mainmenue2;
break;
case 3:
goto mainmenue2;
break;
case 4:
goto mainmenue2;
break;
case 5:
goto mainmenue2;
break;

default :
printf("Wrong entry! \n");

          }

break;
default :
printf("Wrong entry! \n");
}
return 0;
}
