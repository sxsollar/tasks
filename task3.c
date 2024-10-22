#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100 

int size = 0; 
char keys[MAX_SIZE][100]; 
int values[MAX_SIZE]; 

int getIndex(char key[]) 
{ 
    for (int i = 0; i < size; i++) { 
        if (strcmp(keys[i], key) == 0) { 
            return i; 
        } 
    } 
    return -1; // Key not found 
} 

void insert(char key[], int value) 
{ 
    int index = getIndex(key); 
    if (index == -1) { 
        strcpy(keys[size], key); 
        values[size] = value; 
        size++; 
    } 
    else { 
        values[index] = value; 
    } 
} 

int get(char key[]) 
{ 
    int index = getIndex(key); 
    if (index == -1) { 
        return -1; 
    } 
    else {
        return values[index]; 
    } 
} 

void printMap() 
{ 
    for (int i = 0; i < size; i++) { 
        printf("%s: %d\n", keys[i], values[i]); 
    } 
} 

int main() 
{ 
    insert("Code", 5); 
    insert("CPP", 3); 
    insert("CodeBase", 7); 

    printf("Value of map: \n"); 
    printMap(); 

    printf("\nValue of banana: %d\n", get("CPP"));
    printf("Value of 'CPP': %d\n", get("CPP")); 
    printf("Index of CodeBase: %d\n", getIndex("CodeBase")); 

    return 0; 
}
