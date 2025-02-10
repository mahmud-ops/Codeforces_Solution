#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char name[10000];
    gets(name);

    // for(int i = strlen(name) - 1 ; i >= 0; i--){
    //     printf("%c",name[i]);
    // }

    printf("%s",strrev(name));

    printf("\n");

    int length = strlen(name);
    printf("%d\n",length);

    printf("%s\n",strupr(name));
    printf("%s\n",strlwr(name));

    printf("%s\n", strcat(strupr(name) ,strlwr(name)));

    return 0;
}