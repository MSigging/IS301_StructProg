#include <stdio.h>
#include <stdlib.h>

int main() {
    // Variable declarations
    char empNo[10];
    int dept;
    float payRate;
    char exempt;
    int hoursWorked;
    float basePay;
    char buffer[100]; // To skip the header line

    // OPEN file "employee.txt" FOR reading
    FILE *inFile = fopen("employee.txt", "r");
    if (inFile == NULL) {
        printf("Error opening employee.txt\n");
        return 1;
    }

    // OPEN file "payroll_register.txt" FOR writing
    FILE *outFile = fopen("payroll_register.txt", "w");
    if (outFile == NULL) {
        printf("Error creating payroll_register.txt\n");
        fclose(inFile);
        return 1;
    }

    // READ and discard the first line from inFile (headers)
    fgets(buffer, sizeof(buffer), inFile);

    // WRITE headers to outFile
    // Using formatting to align columns nicely
    fprintf(outFile, "%-12s %-5s %-8s %-7s %-6s %-8s\n", 
            "EmpNo", "Dept", "PayRate", "Exempt", "Hours", "BasePay");

    // WHILE not end of inFile DO
    while (fscanf(inFile, "%s %d %f %c %d", empNo, &dept, &payRate, &exempt, &hoursWorked) == 5) {
        
        // CALCULATE basePay
        basePay = payRate * hoursWorked;

        // WRITE data TO outFile
        // %-12s ensures the Employee No is left-justified in a 12-character field
        fprintf(outFile, "%-12s %-5d %-8.2f %-7c %-6d %-8.2f\n", 
                empNo, dept, payRate, exempt, hoursWorked, basePay);
    }

    // CLOSE files
    fclose(inFile);
    fclose(outFile);

    printf("Payroll register has been created.\n");

    return 0;
}