#include<stdio.h>
#include<string.h>

int main(){
    FILE *myFile;
    char info[100000];

    fgets(info , strlen(info) , stdin);
    myFile = fopen("myFile.txt","w");

    while(myFile )
    return 0;
}