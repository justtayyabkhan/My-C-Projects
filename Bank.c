#include <stdio.h>
#include <string.h>
#include <time.h>
int account()
{
    int choose, nextoption;
    printf("\n\nChoose what you want to do:\n1.Check balance\n2.Withdraw money\n3.Deposit money.\n4.Profile(Enter 0 to exit)\n");
    // switch (nextoption)
    // {
    // case 1:
    //     printf("YOUR BALANCE IS: ")
    //     break;

    // default:
    //     break;
    // }
}
struct Bank
{
    int bal;
    char fname[10], sname[10];
    int acc;
    char phone[12];
    char pass[10];

} ta, zo, ya, an;

int main()

{
    // STORED DATA
    ta.acc = 52476595;
    zo.acc = 52476596;
    ya.acc = 52476597;
    an.acc = 52476598;
    strcpy(ta.fname, "Tayyab");
    strcpy(an.fname, "Anas ");
    strcpy(ya.fname, "Mohd ");
    strcpy(zo.fname, "Zoya ");
    strcpy(ta.sname, "Khan");
    strcpy(an.sname, "Abrar ");
    strcpy(ya.sname, "Yasir");
    strcpy(zo.sname, "Khan ");
    ta.bal = 68000;
    zo.bal = 37000;
    ya.bal = 20000;
    an.bal = 26000;
    strcpy(ta.phone, "827785679");
    strcpy(an.phone, "9068452165 ");
    strcpy(ya.phone, "8459623145");
    strcpy(zo.phone, "9634874809 ");
    strcpy(ta.pass, "Tayyab@123");
    strcpy(an.pass, "Anas@123 ");
    strcpy(ya.pass, "Zoya@123");
    strcpy(zo.pass, "Yasir@123 ");

    FILE *storeptr = NULL;
    int i, o, option, opt, mem, nextoption,withdraw,deposit,nwithdraw,ndeposit;
    char newfname[10], newlname[10], pan[10], mail[35];
    char newphone[15];
    int members;
    char tayyabpass[10] = "Tayyab@002", passcheck[10];

    printf("\n\t** WELCOME TO THE BANK **\n");
    printf("Choose any one option:\n1.Open a bank account\n2.Login to your account\n\n Bank Contact Details.\n\t 827945759\txpertsocialmediamanagement@gmail.com \n");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        printf("You need to enter the your details one by one to proceed which will be stored in our database and the account will be created in a span of 3 business days.");
        printf("\nPress 1 to proceed......\n");
        scanf("%d", &opt);
        if (opt = 1)

            printf("Enter your first name in CAPITAL:\n");
        scanf("%s", newfname);
        printf("Enter your last name in CAPITAL:\n");
        scanf("%s", &newlname);
        printf("Enter your phone number:\n");
        scanf("%s", newphone);
        printf("Enter your Email address:\n");
        scanf("%s", &mail);
        printf("Enter your 8 digit PAN number:\n");
        scanf("%s", pan);
        printf("** THANK YOU FOR PROVIDING THE INFORMATION. HAVE A NICE DAY. \n\nWE WILL NOTIFY YOU FOR FURTHER PROCEEDINGS.**  \n");

        storeptr = fopen("Bankdata.txt", "a");
        fprintf(storeptr, "\n*NEW CUSTOMER DATA %s %s*\n", __DATE__, __TIME__);
        fprintf(storeptr, "\tFirst name: %s\n", newfname);
        fprintf(storeptr, "\tLast name: %s\n", newlname);
        fprintf(storeptr, "\tPhone number: %s\n", newphone);
        fprintf(storeptr, "\tEmail: %s\n", mail);
        fprintf(storeptr, "\tPAN: %s\n", pan);

        fclose(storeptr);

        break;
    case 2:
        printf("\n\t**WELCOME TO LOGIN PAGE. **\n");
        printf("Choose from the corresponding account holders.\n1.Tayyab Khan\n2.Zoya Khan\n3.Anas Abrar\n4.Mohd Yasir\n");
        scanf("%d", &members);
        switch (members)
        {
        case 1:
            printf("Enter your password Mr Tayyab Khan:\n");
            scanf("%s", passcheck);
            if (strcmp(passcheck, "Tayyab@123") == 0)
            {
                account();
                scanf("%d", &nextoption);
                switch (nextoption)
                {
                case 1:
                    printf("Your balance is:%d\n",ta.bal);
                    break;
                case 2:
                    printf("Enter how much money you want to withdraw:\n");
                    scanf("%d",&withdraw);
                    nwithdraw=ta.bal-withdraw;
                    printf("Updated Balance is : %d",nwithdraw);
                    break;
                case 3:
                printf("Enter how much money you want to deposit:\n");
                scanf("%d",&deposit);
                ndeposit=ta.bal+deposit;
                printf("Your updated balance is %d",ndeposit);
                break;
                case 4:
                printf("Name: %s \t Phone: %s \nAccfunt no:%d\tPassword %s",ta.fname,ta.phone,ta.acc,ta.pass);
                break;
                default:
                    break;
                }

                // account();
            }
            else
            {
                printf("\nWRONG PASSOWORD!!!!!\n");
            }
            break;
        case 2:
            printf("Enter your password Mrs Zoya Khan:\n");
            scanf("%s", passcheck);
            if (strcmp(passcheck, "Zoya@123") == 0)
            {
                account();
                scanf("%d", &nextoption);
                switch (nextoption)
                {
                case 1:
                    printf("Your balance is:%d\n",zo.bal);
                    break;
                case 2:
                    printf("Enter how much money you want to withdraw:\n");
                    scanf("%d",&withdraw);
                    nwithdraw=zo.bal-withdraw;
                    printf("Updated Balance is : %d",nwithdraw);
                    break;
                case 3:
                printf("Enter how much money you want to deposit:\n");
                scanf("%d",&deposit);
                ndeposit=zo.bal+deposit;
                printf("Your updated balance is %d",ndeposit);
                break;
                case 4:
                printf("Name: %s \t Phone: %s \nAccount no:%d\tPassword %s",zo.fname,zo.phone,zo.acc,zo.pass);
                break;
                default:
                    break;
                }
            }
            else
            {
                printf("\nWRONG PASSOWORD!!!!!\n");
            }
            break;
        case 3:
            printf("Enter your password Mr Anas Abrar:\n");
            scanf("%s", passcheck);
            if (strcmp(passcheck, "Anas@123") == 0)
            {
                account();
                scanf("%d", &nextoption);
                switch (nextoption)
                {
                case 1:
                    printf("Your balance is:%d\n",an.bal);
                    break;
                case 2:
                    printf("Enter how much money you want to withdraw:\n");
                    scanf("%d",&withdraw);
                    nwithdraw=an.bal-withdraw;
                    printf("Updated Balance is : %d",nwithdraw);
                    break;
                case 3:
                printf("Enter how much money you want to deposit:\n");
                scanf("%d",&deposit);
                ndeposit=an.bal+deposit;
                printf("Your updated balance is %d",ndeposit);
                break;
                case 4:
                printf("Name: %s \t Phone: %s \nAccount no:%d\t Password:%s \tPassword %s ",an.fname,an.phone,an.acc,an.pass);
                break;
                default:
                    break;
                }
            }
            else
            {
                printf("\nWRONG PASSOWORD!!!!!\n");
            }
            break;
        case 4:
            printf("Enter your password Mr Mohd Yasir:\n");
            scanf("%s", passcheck);
            if (strcmp(passcheck, "Yasir@123") == 0)
            {
                while (nextoption!=0)
                {
                   
                account();
                scanf("%d", &nextoption);
                switch (nextoption)
                {
                case 1:
                    printf("Your balance is:%d\n",ya.bal);
                    break;
                case 2:
                    printf("Enter how much money you want to withdraw:\n");
                    scanf("%d",&withdraw);
                    nwithdraw=ya.bal-withdraw;
                    printf("Updated Balance is : %d",nwithdraw);
                    break;
                case 3:
                printf("Enter how much money you want to deposit:\n");
                scanf("%d",&deposit);
                ndeposit=ya.bal+deposit;
                printf("Your updated balance is %d",ndeposit);
                break;
                case 4:
                printf("Name: %s \t Phone: %s \nAccount no:%d\tPassword %s",ya.fname,ya.phone,ya.acc,ya.pass);
                break;
                default:
                    break;
                }
                }
                
            }
            else
            {
                printf("\nWRONG PASSOWORD!!!!!\n");
            }
            break;

        default:
            break;
        }
    default:
        break;
    }

    return 0;
}