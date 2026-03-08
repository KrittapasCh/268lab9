#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkLogin(char *login, char *passwd);
//accepted only if Length = 5 and a number 1 or more digits
int checkValidPass(char *ps);

int main() {
	char login[64], password[64];

	printf("Enter login : "); gets(login);
	printf("Enter password : "); gets(password);

	if( checkLogin(login , password) == 1) {
		printf("Welcome\n");
	} else {
		printf("Incorrect login or password\n");
	}

	if(checkValidPass(password)) {
		//if Password is valid
		printf("Accepted\n");
    } else {
		printf("Reject\n");
	}
}

int checkValidPass(char *ps) {
	int accepted=0;
    int length =strlen(ps);
    int digit=0,checkfirstchar=0,upperletter=0,upperrepreat=0;

    //checkdigit and Upperletter and uppernotrepreat
    for(int i=0;i<length;i++){
        if(isdigit(ps[i]))digit++;
        if(isupper(ps[i])){
            upperletter++;
            for(int j=0;j<i;j++){
                if(ps[i]==ps[j])
                upperrepreat=1;
            }
        }
    }
    //check first is Char
    if(isdigit(*ps))checkfirstchar++;

    //4.1
    if(length == 5 && digit >= 1){
        return 1;
    }

    //4.2
    else if(length >=5 && length < 9 && checkfirstchar == 0 && upperletter >= 2 && digit >= 2){
        return 1;
    }

    //4.3
    else if(length >=5 && length < 9 && upperletter >= 2 && upperrepreat == 0 && digit >= 2){
        return 1;
    }
	
	return accepted;
}

int checkLogin(char *login, char *passwd) {
	if( !strcmp(login, "student1") && !strcmp(passwd, "mypass"))
		return 1;
	else
		return 0;
}