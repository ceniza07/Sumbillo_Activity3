#include <stdio.h>
#include <string.h>

int main()
{
    char username[50], password[50];

    printf("Enter your username:\n");
    scanf("%s",&username);
    printf("Enter your password:\n");
    scanf("%s",&password);
    
    check_session(username, password);
    
    return 0;
}

int check_session(const char* username, const char* password){
	if((strcmp(username,"admin")==0 && strcmp(password,"1234")==0) ||
	(strcmp(username,"user")==0 && strcmp(password,"4567")==0) ||
	(strcmp(username,"guest")==0 && strcmp(password,"7890")==0)){
		printf("\nACCESS GRANTED WELCOME %s", username);
	} else {
		printf("\nPASSWORD AND USERNAME IS INCORRECT.");
	}
}
