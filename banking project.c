#include<stdio.h>
#include<stdlib.h>


int ch ,i=1;
int totalAmo=0,withamo,depamo,TranAmo;
int amount=0,totaldep=0,totalwith=0,totaltrans=0;
int TransAcc;

char name[50];
int accno;

void deposite();
void withdraw();
void transfer();
void detail();

int menu();
void main()
{
    
	printf("Enetr your name :");
	gets(name);
	printf("Enter yoour Acc. no");
	scanf("%d",&accno);
	  
   while(1)
   {
      
	

	switch(menu())
	{
	
     case 1:
    	deposite();
    	totaldep+=depamo;
    	break;
     case 2:
    	withdraw();
    	if(withamo<=totalAmo)
		totalwith+=withamo;
    	break;
    	
     case 3:
        transfer();
        if(TranAmo<=totalAmo)
        totaltrans+=TranAmo;
        break;
     case 4:
    	
    	detail();
    	getch();
    	break;
     case 5:
        exit(0);
        printf("****************************************");
        
        
	        	
     default:
    	printf("Invalid entry!!");
     }
      getch();
    }

}
int menu()
{
      	
	printf("Hello Dear!!\n\n");
	printf("Select your choice\n");
	printf("No1. Deposite\n");
	printf("No2. Withdraw\n");
	printf("No3. Transfer\n");
	printf("No4. Check balance\n");
	printf("No5. Exit\n\n");
	printf("Enter your choice:\n");
	scanf("%d",&ch);
	return(ch);
}
void deposite()
{
	printf("Enter Amount you want to deposite:");
	scanf("%d",&depamo);
	totalAmo+=depamo;
}
void withdraw()
{
	printf("Enter Amount you want to withdraw:");
	scanf("%d",&withamo);
	if(withamo<=totalAmo)
	totalAmo-=withamo;
	else
	printf("you don't have sufficient balance\n");
	
}
void transfer()
{
	printf("Enter Account No. where you transfer:");
	scanf("%d",&TransAcc);
	printf("Enter Amount you want to trnsfer:");
	scanf("%d",&TranAmo);
	if(withamo<=totalAmo)
	totalAmo-=TranAmo;
	else
	printf("you don't have sufficient balance\n");
	
}
void detail()
{
	printf("Total balance :%d\n",totalAmo);
	printf("total deposite :%d\n",totaldep);
	printf("total withdraw:%d\n",totalwith);
	printf("total  transfer:%d\n",totaltrans);
	printf("*********************______________________*******************");
}

