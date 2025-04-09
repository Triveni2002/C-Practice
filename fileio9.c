#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 50

struct Student {
    int rollNumber;
    char name[MAX_NAME_LENGTH];
};

void merge(struct Student master[], int m, struct Student transaction[], int n, struct Student updated[]) {
    int i = 0, j = 0, k = 0;
    
    while (i < m && j < n) {
        if (master[i].rollNumber < transaction[j].rollNumber)
            updated[k++] = master[i++];
        else if (master[i].rollNumber > transaction[j].rollNumber)
            updated[k++] = transaction[j++];
        else {
            if (transaction[j].name[0] == 'A')
                updated[k++] = transaction[j];
            j++;
        }
    }
    while (i < m)
        updated[k++] = master[i++];
    while (j < n && transaction[j].name[0] == 'A') 
        updated[k++] = transaction[j++];
}

int main() {
    FILE *masterFile, *transactionFile, *updatedFile;
    struct Student master[MAX_STUDENTS];
    struct Student transaction[MAX_STUDENTS];
    struct Student updated[MAX_STUDENTS * 2]; 
    masterFile = fopen("master.txt", "r");
    transactionFile = fopen("transaction.txt", "r");
    updatedFile = fopen("updated.txt", "w");
    
    if (masterFile == NULL || transactionFile == NULL || updatedFile == NULL) {
        printf("Error opening files.\n");
        exit(1);
    }
    int m = 0;
    while (fscanf(masterFile, "%d %[^\n]", &master[m].rollNumber, master[m].name) != EOF)
        m++;
    int n = 0;
    while (fscanf(transactionFile, "%d %[^\n]", &transaction[n].rollNumber, transaction[n].name) != EOF)
        n++;
    merge(master, m, transaction, n, updated);
    for (int i = 0; i < m + n; i++)
        fprintf(updatedFile, "%d %s\n", updated[i].rollNumber, updated[i].name);
    fclose(masterFile);
    fclose(transactionFile);
    fclose(updatedFile);
    
    printf("Updated file created successfully.\n");
    
    return 0;
}
