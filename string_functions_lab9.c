#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void accept_string(char *str, int max_length);
int length_string(char *str);
bool str_cmp(char *str1, char *str2);
bool longer_string(char *str1, char *str2);
void str_concat(char str1[], char str2[], char *concati);
int countSubstringOccurrences(char *str, char *sub);


int main(){
    char str[2][100];  

    printf("Enter the first string: "); 
    accept_string(str[0], 100);
    printf("\nString one is : %s\n", str[0]);
    printf("Enter the second string: "); 
    accept_string(str[1], 100);
    printf("\nString two is : %s\n", str[1]);

    if(str_cmp(str[0], str[1])){
        printf("The strings are equal\n");
    } else {
        printf("The strings are not equal\n");
    }

    if(longer_string(str[0], str[1])) {
        printf("\n\nString 1 is longer: \n%s\n", str[0]);
    } else {
        printf("\n\nString 2 is longer: \n%s\n", str[1]);
    }

    char sub[100];

    printf("\nEnter the substring you want to find : ");
    accept_string(sub, 100);

    printf("\n\nthe number of times the substring %s appeared in string 1 is : %d", sub , countSubstringOccurrences(str[0],sub));
    
    char concati[200];
    str_concat(str[0], str[1], concati);
    printf("\n\nThe concatenated string is: %s", concati);
    
    return 0;
}


void accept_string(char *str, int max_length) {
    char *ptr = str;
    while (ptr - str < max_length - 1) {
        if (scanf("%c", ptr) != 1 || *ptr == '\n') {
            break;
        }
        ptr++;
    }
    *ptr = '\0'; 
}


int length_string(char *str) {
    int length = 0; 
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}


bool str_cmp(char *str1, char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return false;
        }
        str1++;
        str2++;
    }
    return (*str1 == '\0' && *str2 == '\0');
}


bool longer_string(char *str1, char *str2) {
    return length_string(str1) > length_string(str2);
}


void str_concat(char str1[], char str2[], char *concati) { 
    int i = 0, j = 0;
    while (str1[i] != '\0') {
        concati[i] = str1[i];
        i++;
    }
    while (str2[j] != '\0') {
        concati[i + j] = str2[j];
        j++;
    }
    concati[i + j] = '\0'; 
}


int countSubstringOccurrences(char *str, char *sub) {
    int count = 0;
    int strLen = length_string(str);
    int subLen = length_string(sub);

  
    if (subLen == 0 || subLen > strLen) {
        return 0;
    }

    for (int i = 0; i <= strLen - subLen; i++) {

        int match = 1;
        for (int j = 0; j < subLen; j++) {
            if (str[i + j] != sub[j]) {
                match = 0;
                break;
            }
        }

        if (match) {
            count++;
        }
    }

    return count;
}

