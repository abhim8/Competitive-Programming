#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

// Complete the countingValleys function below.
int countingValleys(int n, char* s);

int main()
{
    int a,c=0,i,p=0,n,min,max,xx[1000000];
char y[1000000];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%s",&y[i]);

}
for(i=0;i<n;i++)
{
if(y[i]=='D'){
--p;
xx[i]=p;

}


else
{
++p;
xx[i]=p;


}
}
xx[i]=0;
for(i=0;i<n;i++){
//printf("%d",xx[i]);
if(xx[i]==0 && xx[i-1]<0){
c++;

}
}
printf("%d",c);
}


char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}
