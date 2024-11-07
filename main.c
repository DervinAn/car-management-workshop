  #include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>
int ne,ns,k1;

    struct Employee {
        char name[50];
        int id;
        char s;
        float salary;
    };


struct paice {
    char name[50];
    int quantity;
    float price;
};

struct sale {
    char Mname[19];    char Mdname[19];
    char pname[19];
    char commentaire[1000];
    int quantity;
    float price;
    float price_ofser;
    time_t sale_time;
    char claintname[15];
    float totale_price;
};
struct module {
    char name[50];
    struct paice paices[20];
};

struct mark {
    char name[50];
    struct module modules[5];
};

    struct mark marks[5];
    struct sale *sales;
    struct Employee *employees;
void wait_30s() {
    printf("-Please wait for 30 seconds before trying again.\n");
    time_t start_time = time(NULL);
    while (difftime(time(NULL), start_time) < 30.0);
}
void display_P(){
int i,k,j;
system("cls");
                      /// Displaying entered data for verification
printf("\nEntered data:\n \n \n");

printf("        | 1- %s\t| 2- %s \t| 3- %s \t| 4- %s \t| 5- %s \t|\n",
       marks[0].name, marks[1].name, marks[2].name, marks[3].name, marks[4].name);
printf("\t---------------------------------------------------------------------------------\n");
// Print module names under the respective marks
for (int j = 0; j < 5; j++) {
    printf("        |");
    for (int m = 0; m < 5; m++) {
        printf("   %-12s|", marks[m].modules[j].name);
    }
    printf("\n");}
printf("\nenter the number of mark:\n");
   do{
    scanf("%d",&k1);
   }while(k1>5 || k1<=0);
        k1=k1-1;
for (i = 0; i < 1; i++) {
    printf("\n|------------------------------------------------------------------|\n");
    printf("|                        Mark %d: %-10s                        |\n", i + 1, marks[k1].name);
    printf("|------------------------------------------------------------------|\n");
    printf("| Model  |               Paice            | Quantity |Price        |\n");
    printf("|------------------------------------------------------------------|\n");
for (j = 0; j < 5; j++) {
    printf("| %-7s", marks[k1].modules[j].name);
    for (k = 0; k <= 19; k++) {
        printf("| %-30s |   %-6d | %9.2fDA |\n",
               marks[k1].modules[j].paices[k].name,
               marks[k1].modules[j].paices[k].quantity,
               marks[k1].modules[j].paices[k].price);
        if (k != 19) {
            printf("|        ");}}
}printf("|------------------------------------------------------------------|\n");}}
void display_s() {
    system("cls");
    printf("\n|-----------------------------------------------------------------------------------------------------------------|\n");
    printf("|                                                Sales Report                                                     |\n");
    printf("|-----------------------------------------------------------------------------------------------------------------|\n");
    printf("| Mark       | Model         | Paice           | Quantity | Price    | Total Price | Client Name                  |\n");
    printf("|-----------------------------------------------------------------------------------------------------------------|\n");

    for (int i = 0; i < ns; i++) {
        printf("| %-12s| %-12s | %-14s | %-7d  | %8.2fDA| %10.2fDA | %-27s |\n",
               sales[i].Mname, sales[i].Mdname, sales[i].pname,
               sales[i].quantity, sales[i].price,
               sales[i].totale_price, sales[i].claintname);
    }

    printf("|-----------------------------------------------------------------------------------------------------------------|\n");
    printf("\n");
    printf("do wanna see the time of sales(1-y/2-n):\n");
    scanf("%d",&k1);
    if(k1==1){
    system("cls");
    printf("\n|-----------------------------------------------------------------------------------------------------------------|\n");
    printf("|                                                Sales Report                                                     |\n");
    printf("|-----------------------------------------------------------------------------------------------------------------|\n");
    printf("| Mark  | Model  | Paice             | Total Price | Client Name        |                    Sale Time            |\n");
    printf("|-----------------------------------------------------------------------------------------------------------------|\n");

    for (int i = 0; i < ns; i++) {
        char mark_initial = sales[i].Mname[0];
        printf("| %-5c | %-6s | %-17s | %11.2f | %-18s | %-62s\n",
               mark_initial, sales[i].Mdname, sales[i].pname,
               sales[i].totale_price,
               sales[i].claintname,
               asctime(localtime(&sales[i].sale_time)));
    }
    printf("|-----------------------------------------------------------------------------------------------------------------|\n");
}}
void display_profit(){
    int i;
                            float totalPriceOfService=0;
                        float totalSalesPrice=0;
                        float totalSalary=0;
                        float totalProfit=0;
                        float Profit_from_paice=0;
                          system("cls");
                         totalPriceOfService=0;
                         totalSalesPrice=0;
                         totalSalary=0;
                         totalProfit=0;
                         Profit_from_paice=0;
                    for(i = 0; i < ne; i++) {
                         totalSalary+= employees[i].salary;
                    }
                       for( i=0;i<ns;i++) {
                        totalSalesPrice+= sales[i].price;
                         totalPriceOfService+= sales[i].price_ofser;
                    }
                    for(i=0;i<ns;i++){
                            k1+=sales[i].quantity;
                    }
                        Profit_from_paice+=650*k1;

                    totalProfit = (Profit_from_paice + totalPriceOfService) - (totalSalary);
                    printf("Analyze Profit and Employee Salary\n");
                    printf("+------------------+----------------+------------------+----------------+\n");
                    printf("| Profit from Servi|   Total Profit | Total Employee   |  total profit  | \n");
                    printf("|                  | from  paice    | Salary           |                |\n");
                    printf("+------------------+----------------+------------------+----------------+\n");
                    printf("|%-18.2f| %-14.2f |%-16.2f  | %-15.2f|\n", totalPriceOfService, Profit_from_paice, totalSalary, totalProfit);
                    printf("+------------------+----------------+------------------+----------------+\n");
                    printf("\n to exit enter 1:");
                    scanf("%d",&k1);
}
void display_cf(){
    system("cls");
printf("\n\n===============================================================================================\n");
printf("|                         Reviews of Previous Clients                                          |\n");
printf("================================================================================================\n");
printf("| %-20s | %-66s |\n", "Client Name", "Comment");
printf("===============================================================================================\n");
for (int i = 0; i < ns; i++) {
    if (strlen(sales[i].commentaire) > 0) { // Check if the comment is not empty
        printf("| %-20s | %-66s |\n", sales[i].claintname, sales[i].commentaire);
}}
printf("=================================================================================================\n");
}
void db() {
    system("cls");
    printf("                                   Welcome boss\n");
    printf("   +---------------------------+---------------------+-------------------------+\n");
    printf("   |     Customer              | Employee Management |     Financial           |\n ");
    printf("  +---------------------------+---------------------+-------------------------+\n");
    printf("   |   1: Exit                 | 5: Add Employee     |   9: View Sales Report  |\n ");
    printf("  |  2: Customer Service      |  6: Remove Employee |  10: Analyze Profit     |\n ");
    printf("  |  3: Customer Feedback     |  7:Find a Employee  |  11:Modife              |\n ");
    printf("  |  4: Check Inventory       |  8:See all Employee |  12:les method de rech  |\n  ");
    printf(" +---------------------------+---------------------+-------------------------+\n");}
void dp() {
    system("cls");
    printf("\t\t\tWelcome\n");
    printf("\t-----------------------------------\n");
    printf("\t|      Employee Management        |\n");
    printf("\t|---------------------------------|\n");
    printf("\t| 1: View My Information          |\n");
    printf("\t| 2: Check Prices                 |\n");
    printf("\t| 3: Exit                         |\n");
    printf("\t-----------------------------------\n");}
void df() {
    system("cls");
    printf("\n\t\t\tWelcome\n");
    printf("\t-------------------------------------\n");
    printf("\t|             Financial             |\n");
    printf("\t|-----------------------------------|\n");
    printf("\t| 1: View Sales Report              |\n");
    printf("\t| 2: Analyze Profit                 |\n");
    printf("\t| 3: pay dariba                     |\n");
    printf("\t| 4: Exit                           |\n");
    printf("\t-------------------------------------\n");}
void swap(struct Employee* a, struct Employee* b) {
    struct Employee temp = *a;
    *a = *b;
    *b = temp;
}
int partition(struct Employee arr[], int low, int high) {
    int pivot = arr[high].id;
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j].id < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }}
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(struct Employee arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }}
///*--------------------------------------------------------*/
void swap2(struct sale* a, struct sale* b) {
    struct sale temp = *a;
    *a = *b;
    *b = temp;
}
int partition2(struct sale arr[], int low, int high) {
    int pivot = arr[low].quantity;
    int i = low + 1;
    for (int j = low + 1; j <= high; j++) {
        if (arr[j].quantity > pivot) {
            swap2(&arr[i], &arr[j]);
            i++;}}
    swap2(&arr[low], &arr[i - 1]);
    return (i - 1);
}
void quickSort2(struct sale arr[], int low, int high) {
    if (low < high) {
        int pi = partition2(arr, low, high);
        quickSort2(arr, low, pi - 1);
        quickSort2(arr, pi + 1, high);
    }
}

void menue(int c) {
      int   n,i,k,j, b;
    char  m[20];
    bool t=false;
    FILE *file;
    FILE *indexFile;
     struct Employee emp;
    long position = 0;
    int searchId ;
    j=1000;
    do{
    switch (c) {
        case 1010:
            db();
            printf("\n votre choix:");
            scanf("%d", &b);
            switch (b) {
            case 1:
               t=true;
            break;
              case 4:
                   display_P();
                 for(i=0;i<5;i++){
                    for(j=0;j<5;j++){
                        for(n=0;n<20;n++){
                 if(marks[i].modules[j].paices[n].quantity==0 ){
                    marks[i].modules[j].paices[n].quantity +=3;
                 }
                        }
                    }
                 }
                   printf("\n to exit enter 1:");
                    scanf("%d",&k1);

              break;
              case 3:
                  display_cf();
                  printf("Do you wanna delete a comment(1-y/2-n)\n");
                  scanf("%d",&k1);
                  if(k1==1){
                    printf("enter the name of the comment you wanna delete  ");
                    fflush(stdin);
                    scanf("%[^\n]",m);
                    for(i=0;i<ns;i++){
                        if(strcmp(sales[i].claintname,m)==0){
                            strcpy(sales[i].commentaire,"");
                        }
                    }
                  }
                  printf("\nTo exit, enter 1: ");
                  scanf("%d", &k1);
                  system("cls");
                break;
                case 5:
                    printf("\n -Enter the number of employees do you wanna add:");
                    scanf("%d", &n);
                    employees = realloc(employees, (ne + n) * sizeof(struct Employee));
                    if (employees == NULL) {
                       printf("Memory reallocation failed.\n");
                       exit(1);}
                    for (i = ne; i < ne+n; i++) {
                     printf("Enter the information of employee %d\n", i + 1);
                     printf("- Enter the name: ");
                     fflush(stdin);
                     scanf("%[^\n]", employees[i].name);
                     printf("- Enter ID: ");
                     scanf("%d", &employees[i].id);
                     printf("- Enter salary: ");
                     scanf("%f", &employees[i].salary);
                     printf("- Enter specialty (single character): ");
                     fflush(stdin); // Clear input buffer
                     scanf(" %c", &employees[i].s);
                     }
                    ne=ne+n;
                  break;
            case 6:
                    printf("-Enter the name of the employee you wanna remove:");
                    fflush(stdin);
                    scanf("%[^\n]",m);
                    for(i=0;i<ne;i++){
                     if(strcmp(employees[i].name,m)==0){
                        n=i;
                        printf("\n i find the employees you went remove:\n");
                        break;
                     }}
                    for (i = n; i < ne; i++) {
                        employees[n] = employees[n+1];
                    }
                    ne=ne-1;
                    employees = realloc(employees, ne * sizeof(struct Employee));
                    if (employees == NULL) {
                       printf("Memory reallocation failed.\n");
                       return 1;}
                    break;
            case 7:
                file = fopen("employees.bin", "rb");
                indexFile = fopen("index.bin", "wb");
                  while (fread(&emp, sizeof(struct Employee), 1, file) == 1){
                        fwrite(&position, sizeof(long), 1, indexFile);
                        position = ftell(file);
                    }
                        fclose(file);
                        fclose(indexFile);

                     file = fopen("employees.bin", "rb");
                     indexFile = fopen("index.bin", "rb");
                printf("-Enter the name of the employee you wanna find :");
                    fflush(stdin);
                    scanf("%[^\n]",m);
                    while (fread(&position, sizeof(long), 1, indexFile) == 1) {
                        fseek(file, position, SEEK_SET);
                        fread(&emp, sizeof(struct Employee), 1, file);
                        printf("pos%d",position);

                        if (strcmp(emp.name, m) == 0) {
                            printf("Employee found: ID=%d,\n Name=%s, \nSalary=%.2f\n", emp.id, emp.name, emp.salary);
                            fclose(file);
                            fclose(indexFile);
                            return 0;
                        }
                    }

                    printf("Employee with name '%s' not found.\n", m);
                    fclose(file);
                    fclose(indexFile);
             printf("|-------------------------------------------------------------------|\n");
               printf("\n to exit enter 1:");
                    scanf("%d",&k1);
                break;
                case 8:   system("cls");
              printf("|-------------------------------------------------------------------|");
              printf("\n|  %-20s |   %-5s |    %-12s |   %-10s  |\n", "Name", "ID", "Salary", "Specialty");
             printf("|-------------------------------------------------------------------|\n");
   for(int i = 0; i < ne; i++) {
     printf("|  %-20s |   %-5d |   %-8.2fDA    |   %c           |\n", employees[i].name, employees[i].id, employees[i].salary, employees[i].s);
  }
             printf("|-------------------------------------------------------------------|\n");
               printf("\n to exit enter 1:");
                    scanf("%d",&k1);
                 break;
                case 9:
                   display_s();
                   printf("\n to exit enter 1:");
                    scanf("%d",&k1);
                   break;
                case 10:
                      display_profit();
                 break;
                case 11:
                    printf("Enter the name of employee :");
                    fflush(stdin);
                    scanf(" %[^\n]", m);
                    for(i=0;i<ne;i++){
                     if(strcmp(employees[i].name,m)==0){
                     break;
                     }}
                        printf("\n1:salary");
                        printf("\n2:name");
                        printf("\n3:type of work");
                        scanf("%d",&k1);
                        switch(k1){
                    case 1:
                        printf("\n Enter the new salary :");
                        scanf("%f", &employees[i].salary);
                    break;
                    case 2:
                        printf("\n- Enter the New name: ");
                     fflush(stdin);
                     scanf("%[^\n]", employees[i].name);
                    break;
                    case 3:
                    printf("- Enter specialty (single character): ");
                     scanf(" %c", &employees[i].s);
                    break;
                        }
                   break;
                    case 12:
                        printf("do you want find with method1(sequential) or method2(directly accesses)\n");
                        scanf("%d",&k1);
                        switch(k1){
                        case 1:
                       printf("Enter the ID of the employee to search for: ");
                        if (scanf("%d", &searchId) != 1) {
                            printf("Invalid input.\n");
                            fclose(file);
                            exit(1);
                        }
                         file = fopen("employees.bin", "rb");
                        while (fread(&emp, sizeof(struct Employee), 1, file)) {
                                if (emp.id == searchId) {
                                    printf("Employee found - ID: %d,\n Name: %s, \nSalary: %.2f\n", emp.id, emp.name, emp.salary);
                                }}
                                fclose(file);
                            printf("\n to exit enter 1:");
                            scanf("%d",&k1);
                        break;
                    case 2:
                           printf("Enter the ID of the employee to search for: ");
                        if (scanf("%d", &searchId) != 1) {
                            printf("Invalid input.\n");
                            fclose(file);
                            exit(1);
                        }
                        file = fopen("employees.bin", "rb");
                        fseek(file, searchId * sizeof(struct Employee), SEEK_SET);
                        fread(&emp, sizeof(struct Employee), 1, file);

                        if (emp.id == searchId) {
                            printf("Employee found - ID: %d, Name: %s, Salary: %.2f\n", emp.id, emp.name, emp.salary);
                        } else {
                            printf("Employee with ID %d not found.\n", searchId);
                        }
                        fclose(file);
                        printf("\n to exit enter 1:");
                            scanf("%d",&k1);
                    break;
                     }
                break;

            }
            break;
            case 990:
                df();
                printf("\n votre choix:");
                scanf("%d", &b);
                switch (b) {
                case 1:
                    printf("\n to exit enter 1:");
                   display_s();
                    scanf("%s",&m);
                    break;
                case 2:
                    display_profit();
                break;
                case 3:
                    system("cls");
                    printf("do you want to pay dariba:%d (1-y/2-n)\n",j);
                    scanf("%d",&k1);
                    if(k1==1){
                    printf("dariba totale from dawla : %d",j);
                    }else{
                    j=j+500;
                    }
                    system("cls");
                    printf("\n to exit enter 1:");
                    scanf("%d",&k1);
                break;
                  case 4:
                  t=true;
                break;
                }
             break;
            case 34:
               dp();
                printf("\n votre choix:");
                scanf("%d", &b);
                switch (b) {
                case 1:
                  printf("pls enter your name:");
                  fflush(stdin);
                  scanf("%[^\n]",m);
                 for(i=0;i<ne;i++){
                     if(strcmp(employees[i].name,m)==0){
                    printf("|-------------------------------------------------------------------|");
                    printf("\n|  %-20s |   %-5s |    %-12s |   %-10s  |\n", "Name", "ID", "Salary", "Specialty");
                     printf("|-------------------------------------------------------------------|\n");
                     printf("|  %-20s |   %-5d |   %-8.2fDA    |   %c           |\n", employees[i].name, employees[i].id, employees[i].salary, employees[i].s);
                     printf("|-------------------------------------------------------------------|\n");
                        break;
                     }}
                    printf("\n to exit enter 1:");
                    scanf("%d",&k1);
                   system("cls");
                break;
                case 2:
                    display_P();
                    printf("\n to exit enter 1:");
                    scanf("%d",&k1);
                break ;
                    case 3:
                  t=true;
                 break;
                }
            break;
        default:
            printf("please enter a existe choice");
    }
    }while(t==false);
}
int main() {
///************************************************************
int i;
    FILE *infile = fopen("employees.bin", "rb");
    if (infile != NULL) {
        fseek(infile, 0, SEEK_END);
        long fileSize = ftell(infile);
        rewind(infile);
        ne = fileSize / sizeof(struct Employee);
        employees = (struct Employee *)malloc(ne * sizeof(struct Employee));
        if (employees == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }
        fread(employees, sizeof(struct Employee), ne, infile);
        fclose(infile);
    } else {
        ne = 0;
    }
///************************************************************
   infile = fopen("paice.bin", "rb");
    if (infile != NULL) {

        fread(marks, sizeof(struct mark), 5, infile);
        fclose(infile);
    }else{
    printf("\n there a problem in file handling paice\n");
    exit(1);
    }
///************************************************************
   infile = fopen("sales.bin", "rb");
    if (infile != NULL) {
        fseek(infile, 0, SEEK_END);
        long fileSize = ftell(infile);
        rewind(infile);
        ns = fileSize / sizeof(struct sale);
        sales = (struct sale *)malloc(ns * sizeof(struct sale));
        if (sales == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }
        fread(sales, sizeof(struct sale), ns, infile);
        fclose(infile);
    }else{
    printf("\n there a problem in file handling sales\n");
    exit(1);
    }
///************************************************************
    int choix, choix2;
    int numItems = 0;
    int  code,j, cem, ct = 1;
    char sale[30];
    bool t = false;
    printf("\t \t \t****************************************************\n");
    printf("\t \t  \t*            Welcome to ASNO work shop             *\n");
    printf("\t \t  \t****************************************************\n");
    printf("\n\n\n");
    printf("\t\t--------------------------------------------\n");
    printf("\t\t|Are you ||\t1:Employee  |or|  2:client |\n");
    printf("\t\t--------------------------------------------");
    printf("\n \n \t\t \tenter votre choix:");
    scanf("%d", &choix);
    switch (choix) {
        case 1:
            while (ct <= 5 && t == false) {
                if (ct == 5) {
                    wait_30s();
                    ct=1;
                }
                printf("enter the code:");
                scanf("%d", &code);
                if (code == 3456) {
                    t = true;
                    system("cls");
                    printf("\n\n\n");
                    printf("                   *welcome Employee*\n");
                    printf("   -enter your id:");
                    scanf("%d", &cem);
                     system("cls");
                    menue(cem);
                } else if (ct != 5) {
                    printf("try again\n");
                }
                ct++;
            }
            break;
                case 2:
           do{
           printf("              welcome\n");
           printf("--------------------------------------------\n");
           printf("1:do you need to fixed your car\n");
           printf("2:order part\n");
           printf("3:see review of previous claint\n");
           printf("4:get out\n");
           printf("give me your choice:");
           scanf("%d",&choix2);
           switch(choix2){
           case 1:
               j = ns;
            printf("Choose the parts you want:\n");
            display_P();
            printf("Enter the number of module :");
            scanf(" %d", &ct);
            printf("Enter the quantity of paice you wanna take:");
             scanf(" %d", &cem);
             printf("\nenter name of paice :");
            fflush(stdin);
            scanf(" %[^\n]", sale);
            ct = ct - 1;
        for (i = 0; i < 20; i++) {
        if (strcmp(marks[k1].modules[ct].paices[i].name, sale) == 0) {
            marks[k1].modules[ct].paices[i].quantity -= cem;
            sales = realloc(sales, (ns + 1) * sizeof(struct sale));
            if (sales == NULL) {
                printf("Memory reallocation failed.\n");
                exit(1);}
            strcpy(sales[j].Mname, marks[k1].name);
            strcpy(sales[j].Mdname, marks[k1].modules[ct].name);
            strcpy(sales[j].pname, sale);
            strcpy(sales[i].commentaire, "\0");
            sales[j].quantity = cem;
            sales[j].price = marks[k1].modules[ct].paices[i].price*cem;
            sales[j].sale_time = time(NULL);
            sales[j].price_ofser=1000*sales[j].quantity;
            sales[j].totale_price = sales[j].price + sales[j].price_ofser;
            printf("Please enter your name: ");
            fflush(stdin);
            scanf(" %[^\n]", sales[j].claintname);
            ns++;
            printf("do you wenne to leave your commentaire(1-y/2n)");
            scanf("%d",&k1);
            if(k1==1){
                printf("\n please enter your comment :");
                fflush(stdin);
                scanf(" %[^\n]", sales[j].commentaire);
            }
            break;
        }}
           break;
           case 2:
               j=ns;
             printf("chose the parts you went\n");
             display_P();
             printf("Enter the number of module :");
             scanf("%d",&ct);
            ct=ct-1;
             printf("\nEnter the quantity of paice you wanna take:");
             scanf("%d",&cem);
             printf("enter name of paice :");
             fflush(stdin);
            scanf(" %[^\n]", sale);
            for(i=0;i<20;i++){
                if(strcmp(marks[k1].modules[ct].paices[i].name,sale)==0){
                marks[k1].modules[ct].paices[i].quantity -= cem;
                sales = realloc(sales, (ns + 1) * sizeof(struct sale));
                printf("%d",j);
                printf("%d",ns);
                strcpy(sales[j].Mname, marks[k1].name);
                strcpy(sales[j].Mdname, marks[k1].modules[ct].name);
                strcpy(sales[j].pname, sale);
                strcpy(sales[i].commentaire, "\0");
                sales[j].quantity = cem;
                sales[j].price = marks[k1].modules[ct].paices[i].price*cem;
                sales[j].totale_price= marks[k1].modules[ct].paices[i].price*cem;
                sales[j].sale_time = time(NULL);
                strcpy(sales[j].claintname, "unknown client");
                ns++;
            printf("do you want to leave your commentaire(1-y/2n)");
            scanf("%d",&k1);
            if(k1==1){
                printf("\n please enter your comment  :");
                fflush(stdin);
                scanf(" %[^\n]", sales[j].commentaire);
            }
            break;
            }}
          break;
           case 3:
               system("cls");
               printf("");
           break;
           case 4:
           display_cf();
           printf("\nTo exit, enter 1: ");
           scanf("%d", &k1);
           system("cls");
           break;
           case 6:
               t=true;
            break;
           default:
            printf("please enter a existe choice");
            break;
           }
       }while(t==false);

          break;
            default:
                printf("Invalid choice. Please choose 1 or 2.");
        }

               quickSort(employees, 0, ne - 1);
               quickSort2(sales, 0, ns - 1);

                     ///***************************************
                      FILE *fp = fopen("employees.bin", "wb");
                    if (fp == NULL) {
                     printf("Error opening file\n");
                     exit(1);
                    }
                     fwrite(employees, sizeof(struct Employee), ne, fp);
                      fclose(fp);
                    ///***************************************
                      fp = fopen("paice.bin", "wb");
                    if (fp != NULL) {

                      fwrite(marks, sizeof(struct mark), 5, fp);
                    fclose(fp);
                    }else{
                   printf("\n there a problem in file handling\n");
                   exit(1);
                    }
                    ///***************************************
                     fp = fopen("sales.bin", "wb");
                    if (fp != NULL) {

                      fwrite(sales, sizeof(struct sale), ns, fp);
                    fclose(fp);
                    }else{
                   printf("\n there a problem in file handling\n");
                   exit(1);
                    }
                    ///***************************************

       free(employees);
       free(sales);
    return 1;
}

