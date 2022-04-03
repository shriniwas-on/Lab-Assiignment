#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    int i,l,max=0;
    char str[100];
    int num_str[1000]={0};
    int result;
    printf("Input the string : ");
    gets(str);
    l=strlen(str);
    for(i=0;i<l;i++){
        num_str[str[i]]++;
    }
    for(i = 0; i < l; i++)
  	{
		if(max < num_str[str[i]])
		{
			max = num_str[str[i]];
			result = str[i];
		}
	}
    printf("The highest frequency of character '%c'\nappears number of times :%d",result,max);
return 0;

}