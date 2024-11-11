#include <stdio.h>
#include <stdlib.h>

void accept_string(char *str, int max_length);
int length_string(char *str);
int total_chars(char *str);
int total_vovels(char *str);
void copy_String(char *str , char *copy);


int main(){

    char str[100];
    
    printf("Enter a string: ");
    
    accept_string(str, 100);
    
    printf("\nYou entered: %s\n", str);

    printf("\nLength of the string is : %d", length_string(str));

    printf("\nThe total number of characters in the string are : %d " , total_chars(str));

    printf("\ntotal number of vovels in the string are : %d " , total_vovels(str));

    //copying the string 
    char copy[100];
    copy_String(str, copy);

    printf("\nThe copied string is: %s\n", copy);
    
    
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

int length_string(char *str){

    char *ptr = str;
    int length = 0; 

    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }
    
    return length;
    
}

int total_chars(char *str) {
    char *ptr = str;
    int chars = 0;
    while (*ptr != '\0') {
        if (*ptr != ' ' && *ptr != '\t' && *ptr != '\n' ) {
            chars++;
        }
        ptr++;
    }
    return chars;
}

int total_vovels(char *str){
      char *ptr = str;
    int vovels = 0;
    while (*ptr != '\0') {
        if ( *ptr == 'a' ||*ptr == 'e' ||*ptr == 'i'||*ptr == 'o'||*ptr == 'u'  ) {
            vovels++;
        }
        ptr++;
    }
    return vovels;

}
void copy_String(char *str, char *copy) {
    char *ptr = str;
    char *Pcopy = copy;

    while (*ptr != '\0') {
        *Pcopy = *ptr;
        ptr++;
        Pcopy++;
    }
    *Pcopy = '\0'; 
}
