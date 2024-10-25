#include<stdio.h>
#include<string.h>
#define MAX 100
char bigNumber[MAX];
size_t num1=0;
void addDight(char digit){
    if(num1<MAX){
        bigNumber[num1++]=digit;
    }else{
        printf("WARNING:too long");
    }
}

int main(){
    char input[100];
    printf("please enter a digit:");
    fgets(input, sizeof(input), stdin);
    input[strlen(input) - 1] = '\0';

for(int i=0;input[i];i++){
    if(input[i]>='0'&&input[i]<='9'){
        addDight(input[i]-'0');
    }
}

printf("the digit is:");
for(size_t j=0;j<num1;j++){
    printf("%c",bigNumber[j]);
}
printf("\n");
return 0;
}