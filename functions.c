#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> 
#include "functions.h"

//#define password_length 10
int password_length;
int user_input;

void read_user_input() {
    printf("Please select an option for password:\n");
    printf("1 - low\n"); 
    printf("2 - low + high\n");
    printf("3 - low + high + number\n");
    printf("4 - low + high + number + symbol\n");
    scanf("%d", &user_input);  
    printf("User input was = %d\n",user_input);
}

void read_length() {
    printf("Please enter length of password:\n");
    scanf("%d", &password_length);  
    printf("Selected length is = %d\n", password_length);
}


void select_password_type() {

    char lower_upper[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char lower_upper_number[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char lower_upper_number_symbol[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789/,.-+=~`<>:";
    char alphabet_lower[] = "abcdefghijklmnopqrstuvwxyz";
    char alphabet_upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char number[] = "0123456789";
    char special_symbol[] = "/,.-+=~`<>:";

    time_t t;
    srand((unsigned) time(&t));
    if (user_input == 1) {
        // lower case alphabet only
        for(int i = 0; i < password_length; i++) {
		    printf("%c", alphabet_lower[rand() % (sizeof alphabet_lower - 1)]);
	    }
        printf("\n");

    } else if (user_input == 2) {
        // lower + upper
        char selected_char_set[sizeof(lower_upper)];
        strcpy(selected_char_set, lower_upper);
        for(int i = 0; i < password_length; i++) {
		    printf("%c", selected_char_set[rand() % (sizeof selected_char_set - 1)]);
	    }
        printf("\n");
        
    } else if (user_input == 3) {
        // low + upper + number
        char selected_char_set[sizeof(lower_upper_number)];
        strcpy(selected_char_set, lower_upper_number);
        for(int i = 0; i < password_length; i++) {
		    printf("%c", selected_char_set[rand() % (sizeof selected_char_set - 1)]);
	    }
        printf("\n");
        
    } else if (user_input == 4) {
       // low + upper + number + special symbol 
        char selected_char_set[sizeof(lower_upper_number_symbol)];
        strcpy(selected_char_set, lower_upper_number_symbol);
        for(int i = 0; i < password_length; i++) {
		    printf("%c", selected_char_set[rand() % (sizeof selected_char_set - 1)]);
	    }
        printf("\n");
    }
}