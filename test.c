#include <stdio.h>
#include <stdlib.h>/// to brige dynamic memory allocation
#include <time.h>
#include <stdbool.h>
#include <string.h>
int ne,np;



/*
int main() {
///88888888888888888888888888888888888888888888888888/
FILE *infile;
   infile = fopen("paice.bin", "rb");
    if (infile != NULL) {

        fread(marks, sizeof(struct mark), 5, infile);
        fclose(infile);
    }



    int i, j, k,f,p;
    int num_paices;

    scanf("%d",&f);
    switch(f){

    case 1:
// Initialize mark names
strcpy(marks[0].name, "Toyota");
strcpy(marks[1].name, "Ford");
strcpy(marks[2].name, "Honda");
strcpy(marks[3].name, "Chevrolet");
strcpy(marks[4].name, "Nissan");

// Initialize module names for each mark
strcpy(marks[0].modules[0].name, "yaris");
strcpy(marks[0].modules[1].name, "camry");
strcpy(marks[0].modules[2].name, "corolla");
strcpy(marks[0].modules[3].name, "rav4");
strcpy(marks[0].modules[4].name, "hilux");

strcpy(marks[1].modules[0].name, "focus");
strcpy(marks[1].modules[1].name, "fusion");
strcpy(marks[1].modules[2].name, "raptor");
strcpy(marks[1].modules[3].name, "ranger");
strcpy(marks[1].modules[4].name, "mustang");

strcpy(marks[2].modules[0].name, "accord");
strcpy(marks[2].modules[1].name, "civic");
strcpy(marks[2].modules[2].name, "cr-v");
strcpy(marks[2].modules[3].name, "pilot");
strcpy(marks[2].modules[4].name, "eg6");

strcpy(marks[3].modules[0].name, "malibu");
strcpy(marks[3].modules[1].name, "cruze");
strcpy(marks[3].modules[2].name, "impala");
strcpy(marks[3].modules[3].name, "captive");
strcpy(marks[3].modules[4].name, "corvette");

strcpy(marks[4].modules[0].name, "altima");
strcpy(marks[4].modules[1].name, "maxima");
strcpy(marks[4].modules[2].name, "sentra");
strcpy(marks[4].modules[3].name, "versa");
strcpy(marks[4].modules[4].name, "kicks");

// Initialize paice names, prices, and quantities
for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
        strcpy(marks[i].modules[j].paices[0].name, "hood");
        strcpy(marks[i].modules[j].paices[1].name, "Exhaust System");
        strcpy(marks[i].modules[j].paices[2].name, "Brake System");
        strcpy(marks[i].modules[j].paices[3].name, "Transmission");
        strcpy(marks[i].modules[j].paices[4].name, "Engine");
        strcpy(marks[i].modules[j].paices[5].name, "Suspension");
        strcpy(marks[i].modules[j].paices[6].name, "window");
        strcpy(marks[i].modules[j].paices[7].name, "door");
        strcpy(marks[i].modules[j].paices[8].name, "Tires");
        strcpy(marks[i].modules[j].paices[9].name, "Radiator");
        strcpy(marks[i].modules[j].paices[10].name, "Steering Wheel");
        strcpy(marks[i].modules[j].paices[11].name, "Air Conditioning");
        strcpy(marks[i].modules[j].paices[12].name, "Dashboard");
        strcpy(marks[i].modules[j].paices[13].name, "Seat Belt");
        strcpy(marks[i].modules[j].paices[14].name, "Radio");
        strcpy(marks[i].modules[j].paices[15].name, "GPS Navigation");
        strcpy(marks[i].modules[j].paices[16].name, "Headlights");
        strcpy(marks[i].modules[j].paices[17].name, "Tail Lights");
        strcpy(marks[i].modules[j].paices[18].name, "Wipers");
        strcpy(marks[i].modules[j].paices[19].name, "Mirrors");

        // Assign random prices and quantities for each paice
        for (int k = 0; k < 20; k++) {
                marks[i].modules[j].paices[k].quantity = rand() % 21;
                marks[i].modules[j].paices[k].price = (rand() % 165000 + 2800) / 10.0f;
            }
    }
}




///***************************************
                       FILE *fp = fopen("paice.bin", "wb");
                    if (fp == NULL) {
                     printf("Error opening file\n");
                     exit(1);
                    }
                    fwrite(marks, sizeof(struct mark), 5, fp);
                    fclose(fp);
///***************************************


 break;
 case 2:
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
    printf("\n");
}


    scanf("%d",&k);
    switch(k){
        case 1:
    for (i = 0; i < 1; i++) {
        printf("\nMark %d: %s\n", i + 1, marks[i].name);
        for (j = 0; j < 4; j++) {
            printf("  Module %d: %s\n", j + 1, marks[i].modules[j].name);
            for (k = 0; k < 19; k++) {
                printf("    Paice %d: %s, Quantity: %d, Price: %.2fDA\n", k + 1,
                       marks[i].modules[j].paices[k].name,
                       marks[i].modules[j].paices[k].quantity,
                       marks[i].modules[j].paices[k].price);
            }
        }

    break;

    }
    break;

    }
    }
    return 0;
}

/*
// Initialize mark names
strcpy(marks[0].name, "Toyota");
strcpy(marks[1].name, "Ford");
strcpy(marks[2].name, "Honda");
strcpy(marks[3].name, "Chevrolet");
strcpy(marks[4].name, "Nissan");

// Initialize module names for each mark
strcpy(marks[0].modules[0].name, "yaris");
strcpy(marks[0].modules[1].name, "camry");
strcpy(marks[0].modules[2].name, "corolla");
strcpy(marks[0].modules[3].name, "rav4");
strcpy(marks[0].modules[4].name, "hilux");

strcpy(marks[1].modules[0].name, "focus");
strcpy(marks[1].modules[1].name, "fusion");
strcpy(marks[1].modules[2].name, "raptor");
strcpy(marks[1].modules[3].name, "ranger");
strcpy(marks[1].modules[4].name, "mustang");

strcpy(marks[2].modules[0].name, "accord");
strcpy(marks[2].modules[1].name, "civic");
strcpy(marks[2].modules[2].name, "cr-v");
strcpy(marks[2].modules[3].name, "pilot");
strcpy(marks[2].modules[4].name, "eg6");

strcpy(marks[3].modules[0].name, "malibu");
strcpy(marks[3].modules[1].name, "cruze");
strcpy(marks[3].modules[2].name, "impala");
strcpy(marks[3].modules[3].name, "captive");
strcpy(marks[3].modules[4].name, "corvette");

strcpy(marks[4].modules[0].name, "altima");
strcpy(marks[4].modules[1].name, "maxima");
strcpy(marks[4].modules[2].name, "sentra");
strcpy(marks[4].modules[3].name, "versa");
strcpy(marks[4].modules[4].name, "kicks");

// Initialize paice names, prices, and quantities
for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
        strcpy(marks[i].modules[j].paices[0].name, "hood");
        strcpy(marks[i].modules[j].paices[1].name, "Exhaust System");
        strcpy(marks[i].modules[j].paices[2].name, "Brake System");
        strcpy(marks[i].modules[j].paices[3].name, "Transmission");
        strcpy(marks[i].modules[j].paices[4].name, "Engine");
        strcpy(marks[i].modules[j].paices[5].name, "Suspension");
        strcpy(marks[i].modules[j].paices[6].name, "window");
        strcpy(marks[i].modules[j].paices[7].name, "door");
        strcpy(marks[i].modules[j].paices[8].name, "Tires");
        strcpy(marks[i].modules[j].paices[9].name, "Radiator");
        strcpy(marks[i].modules[j].paices[10].name, "Steering Wheel");
        strcpy(marks[i].modules[j].paices[11].name, "Air Conditioning");
        strcpy(marks[i].modules[j].paices[12].name, "Dashboard");
        strcpy(marks[i].modules[j].paices[13].name, "Seat Belt");
        strcpy(marks[i].modules[j].paices[14].name, "Radio");
        strcpy(marks[i].modules[j].paices[15].name, "GPS Navigation");
        strcpy(marks[i].modules[j].paices[16].name, "Headlights");
        strcpy(marks[i].modules[j].paices[17].name, "Tail Lights");
        strcpy(marks[i].modules[j].paices[18].name, "Wipers");
        strcpy(marks[i].modules[j].paices[19].name, "Mirrors");

        // Assign random prices and quantities for each paice
        for (int k = 0; k < 20; k++) {
                marks[i].modules[j].paices[k].quantity = rand() % 21;
                marks[i].modules[j].paices[k].price = (rand() % 165000 + 2800) / 10.0f;
            }
    }
}
strcpy(sales[0].name, "Toyota");
strcpy(sales[1].name, "Ford");
strcpy(sales[2].name, "Honda");
strcpy(sales[3].name, "Chevrolet");
strcpy(sales[4].name, "Nissan");

// Initialize module names for each sales
strcpy(sales[0].modules[0].name, "yaris");
strcpy(sales[0].modules[1].name, "camry");
strcpy(sales[0].modules[2].name, "corolla");
strcpy(sales[0].modules[3].name, "rav4");
strcpy(sales[0].modules[4].name, "hilux");

strcpy(sales[1].modules[0].name, "focus");
strcpy(sales[1].modules[1].name, "fusion");
strcpy(sales[1].modules[2].name, "raptor");
strcpy(sales[1].modules[3].name, "ranger");
strcpy(sales[1].modules[4].name, "mustang");

strcpy(sales[2].modules[0].name, "accord");
strcpy(sales[2].modules[1].name, "civic");
strcpy(sales[2].modules[2].name, "cr-v");
strcpy(sales[2].modules[3].name, "pilot");
strcpy(sales[2].modules[4].name, "eg6");

strcpy(sales[3].modules[0].name, "malibu");
strcpy(sales[3].modules[1].name, "cruze");
strcpy(sales[3].modules[2].name, "impala");
strcpy(sales[3].modules[3].name, "captive");
strcpy(sales[3].modules[4].name, "corvette");

strcpy(sales[4].modules[0].name, "altima");
strcpy(sales[4].modules[1].name, "maxima");
strcpy(sales[4].modules[2].name, "sentra");
strcpy(sales[4].modules[3].name, "versa");
strcpy(sales[4].modules[4].name, "kicks");

// Initialize paice names, prices, and quantities
for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
        strcpy(sales[i].modules[j].paices[0].name, "hood");
        strcpy(sales[i].modules[j].paices[1].name, "Exhaust System");
        strcpy(sales[i].modules[j].paices[2].name, "Brake System");
        strcpy(sales[i].modules[j].paices[3].name, "Transmission");
        strcpy(sales[i].modules[j].paices[4].name, "Engine");
        strcpy(sales[i].modules[j].paices[5].name, "Suspension");
        strcpy(sales[i].modules[j].paices[6].name, "window");
        strcpy(sales[i].modules[j].paices[7].name, "door");
        strcpy(sales[i].modules[j].paices[8].name, "Tires");
        strcpy(sales[i].modules[j].paices[9].name, "Radiator");
        strcpy(sales[i].modules[j].paices[10].name, "Steering Wheel");
        strcpy(sales[i].modules[j].paices[11].name, "Air Conditioning");
        strcpy(sales[i].modules[j].paices[12].name, "Dashboard");
        strcpy(sales[i].modules[j].paices[13].name, "Seat Belt");
        strcpy(sales[i].modules[j].paices[14].name, "Radio");
        strcpy(sales[i].modules[j].paices[15].name, "GPS Navigation");
        strcpy(sales[i].modules[j].paices[16].name, "Headlights");
        strcpy(sales[i].modules[j].paices[17].name, "Tail Lights");
        strcpy(sales[i].modules[j].paices[18].name, "Wipers");
        strcpy(sales[i].modules[j].paices[19].name, "Mirrors");

        // Set quantity to 0 for each paice
        for (int k = 0; k < 20; k++) {
            sales[i].modules[j].paices[k].quantity = 0;
            // Assign a random price for each paice
            sales[i].modules[j].paices[k].price =0;
        }
    }}
    strcpy(employees[0].name, "John");
    employees[0].id = 101;
    employees[0].s = 'M';
    employees[0].salary = 50000.0;

    strcpy(employees[1].name, "Alice");
    employees[1].id = 102;
    employees[1].s = 'F';
    employees[1].salary = 60000.0;

    strcpy(employees[2].name, "Bob");
    employees[2].id = 103;
    employees[2].s = 'M';
    employees[2].salary = 55000.0;

    strcpy(employees[3].name, "Emma");
    employees[3].id = 104;
    employees[3].s = 'F';
    employees[3].salary = 52000.0;

    strcpy(employees[4].name, "Tom");
    employees[4].id = 105;
    employees[4].s = 'M';
    employees[4].salary = 48000.0;

    #include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct sale {
    char Mname[19];
    char Mdname[19];
    char pname[19];
    char commentaire[1000];
    int quantity;
    float price;
    float price_ofser;
    time_t sale_time;
    char claintname[15];
    float totale_price;
};

int main() {
    // Car marks and models
    char *car_marks[] = {"Toyota", "Ford", "Honda", "Chevrolet", "Nissan"};
    char *car_models[][5] = {
        {"Yaris", "Camry", "Corolla", "Rav4", "Hilux"},
        {"Focus", "Fusion", "Raptor", "Ranger", "Mustang"},
        {"Accord", "Civic", "CR-V", "Pilot", "EG6"},
        {"Malibu", "Cruze", "Impala", "Captive", "Corvette"},
        {"Altima", "Maxima", "Sentra", "Versa", "Kicks"}
    };

    int sale_count = 30; // Number of sales
    struct sale *sales = malloc(sale_count * sizeof(struct sale)); // Allocate memory for array of sales

    if (sales == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    srand(time(NULL)); // Seed for random number generation

    // Initialize sales array with sample data
    for (int i = 0; i < sale_count; i++) {
        int mark_index = rand() % 5; // Randomly select a car mark
        int model_index = rand() % 5; // Randomly select a car model

        strcpy(sales[i].Mname, car_marks[mark_index]);
        strcpy(sales[i].Mdname, car_models[mark_index][model_index]);
        sprintf(sales[i].pname, "%s %s", car_marks[mark_index], car_models[mark_index][model_index]);
        strcpy(sales[i].commentaire, "Sample Comment");
        sales[i].quantity = rand() % 10 + 1; // Random quantity between 1 and 10
        sales[i].price = (rand() % 500 + 100) * 1.0; // Random price between 100 and 600
        sales[i].price_ofser = ((rand() % 3) + 1) * 1000.0; // Random price_ofser: 1000, 2000, or 3000
        sales[i].sale_time = time(NULL);
        strcpy(sales[i].claintname, "Sample Client");
        sales[i].totale_price = sales[i].quantity * sales[i].price;

        printf("Sale %d:\n", i + 1);
        printf("Mname: %s\n", sales[i].Mname);
        printf("Mdname: %s\n", sales[i].Mdname);
        printf("pname: %s\n", sales[i].pname);
        printf("commentaire: %s\n", sales[i].commentaire);
        printf("quantity: %d\n", sales[i].quantity);
        printf("price: %.2f\n", sales[i].price);
        printf("price_ofser: %.2f\n", sales[i].price_ofser);
        printf("sale_time: %ld\n", sales[i].sale_time);
        printf("claintname: %s\n", sales[i].claintname);
        printf("totale_price: %.2f\n", sales[i].totale_price);
        printf("\n");
    }

    free(sales); // Free the allocated memory
    return 0;
}

*/


#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    int id;
    char s;
    float salary;
};

// Function to create an index file
void createIndexFile() {
    FILE *file = fopen("employees.bin", "rb");
    FILE *indexFile = fopen("index.bin", "wb");

    if (file == NULL || indexFile == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    struct Employee employee;
    long position = 0;

    // Read records from the data file and write index records to the index file
    while (fread(&employee, sizeof(struct Employee), 1, file) == 1) {
        fwrite(&position, sizeof(long), 1, indexFile);
        position = ftell(file);
    }

    fclose(file);
    fclose(indexFile);
}

int main() {
    // Create an index file for the data file
    createIndexFile();

    int searchID = 990;
    FILE *file = fopen("employees.bin", "rb");
    FILE *indexFile = fopen("index.bin", "rb");

    if (file == NULL || indexFile == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    long position;
    struct Employee employee;
    int i=0;

    // Read index records from the index file and search for the employee with matching ID
    while (fread(&position, sizeof(long), 1, indexFile) == 1) {
        fseek(file, position, SEEK_SET);
        fread(&employee, sizeof(struct Employee), 1, file);

        if (employee.id == searchID) {
            printf("Employee found: ID=%d, Name=%s, Salary=%.2f\n", employee.id, employee.name, employee.salary);
            fclose(file);
            fclose(indexFile);
            return i;
        }
         i++;
    }

    printf("Employee with ID %d not found.\n", searchID);
    fclose(file);
    fclose(indexFile);

    return 0;
}

