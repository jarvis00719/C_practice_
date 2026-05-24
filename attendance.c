#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
typedef struct {
    char empId[20];
    char name[50];
    char company[10]; // "CompA","CompB","CompC"
    char date[12];    // YYYY-MM-DD
    char shift[10];   // "Morning","Evening","Night"
    char status[10];  // "Present"/"Absent"
} Record;

void addRecord(FILE *fp) {
    Record r;
    printf("Employee ID: "); scanf("%s", r.empId);
    printf("Name: "); scanf(" [^\n]", r.name);
    printf("Company (NTPC / NSL / DRDO ): "); scanf("%s", r.company);
    printf("Date (YYYY-1MM-DD): "); scanf("%s", r.date);
    printf("Shift (Morning/Evening/Night): "); scanf("%s", r.shift);
    printf("Status (Present/Absent): "); scanf("%s", r.status);
    fprintf(fp, "[%s], [%s]\t, [%s]\t, [%s]\t, [%s]\t,[%s]", r.empId, r.name, r.company, r.date, r.shift, r.status);
    fflush(fp);
    printf("Saved\n");
}

void viewRecords(const char *filename) {
    FILE *fp = fopen(filename, "r");
    if(!fp){ printf("No records yet.\n"); return; }
    char line[256];
    printf("ID,Name,Company,Date,Shift,Status\n");
    while(fgets(line, sizeof(line), fp)) printf("%s", line);
    fclose(fp);
}

int main() {
    const char *file = "attendance.csv";
    FILE *fp = fopen(file, "a+");
    if(!fp){ perror("file"); return 1; }
    int choice;
    while(1){
        printf("\n1 Add  2 View  3 Exit\nChoice: ");
        if(scanf("%d", &choice)!=1) break;
        if(choice==1) addRecord(fp);
        else if(choice==2) viewRecords(file);
        else break;
    }
    fclose(fp);
    return 0;
}