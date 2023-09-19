// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
#include<math.h>

int main() {
    printf("Hello, I can find the maximum possible perfect square if you provide a number containing three or fewer underscores.\n");
    printf("Enter the number with underscore:");
    char num[50],temp[50];
    scanf("%s",&num);
    //printf("%d ",);
    //int len=strlen()
    int j,flag=1,count;
    long int c;
    float s;
    for(char i='9';i>='0'&&flag!=0;i--)
    {
        for(char m='9';m>='0';m--)
        {
            for(char k='9';k>='0';k--)
            {
                count=0;
            strcpy(temp,num);
            //printf("%s ",temp);
            for(j=0;temp[j]!='\0';j++)
            {
                if(temp[j]=='_')
                {
                    if(count==0)
                        temp[j]=i;
                    else if(count==1)
                        temp[j]=m;
                    else if(count==2)
                        temp[j]=k;
                    count++;
                    
                }
            }
            
            c=strtol(temp,NULL,10);
            //printf("%d ",c);
            float s=sqrt(c);
            if(s==floor(s))
            {
                printf("%d",c);
                flag=0;
                break;
                
            }
            }
        }
        
    }
    if(flag)
        printf("Not Possible");

    return 0;
}
