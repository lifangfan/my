#include<stdio.h>
#include<stdlib.h>
void menu()
{
    printf("//********************************************************//\n");
    printf("//**This menu program is coded by Li fangfang.Version1.0**//\n");
    printf("//********************************************************//\n");
    printf("//*****hello*******welcome********************************//\n");
    printf("//*****quit********exit***********************************//\n");
    printf("//*****add*********addition of two nums*******************//\n");
    printf("//*****subs********substration of two nums****************//\n");
    printf("//*****multi*******multiplication of two nums*************//\n");
    printf("//*****divi********division of two nums*******************//\n");
    printf("//*****bigger******bigger of two nums*********************//\n");
    printf("//*****oppnum******opposite of one num********************//\n");
    printf("//********************************************************//\n");
}

void hello()
{
    printf("welcome\n");
}

void quit()
{
    exit(0);
}

void add()
{
    double a,b;
    printf("please input two number:");
    scanf("%lf %lf",&a,&b);
    printf("%lf\n",a+b);

}

void sub()
{
    double a,b;
    printf("please input two number:");
    scanf("%lf %lf",&a,&b);
    printf("%lf\n",a-b);

}

void multi()
{
    double a,b;
    printf("please input two number:");
    scanf("%lf %lf",&a,&b);
    printf("%lf\n",a*b);

}

void divide()
{
    double a,b;
    printf("please input two number:");
    scanf("%lf %lf",&a,&b);
    printf("%lf\n",a/b);

}

void bigger()
{
    double a,b,bigger;
    printf("please input two number:");
    scanf("%lf %lf",&a,&b);
    bigger = a > b ? a : b;
    printf("%lf\n",bigger);

}

void oppnum()
{
    int a;
    printf("please input one number:");
    scanf("%d",&a);
    printf("%d\n",-a);

}


int main()
{
    char cmd[128];
    while(1)
    {
        scanf("%s",cmd);
            if(strcmp(cmd,"hello") == 0)
            {
                hello();
            }
            else if(strcmp(cmd,"quit") == 0)
            
            {
                quit();
            }
            else if(strcmp(cmd,"add") == 0)

            {
                add();
            }
            else if(strcmp(cmd,"sub") == 0)

            {
                sub();
            }
            else if(strcmp(cmd,"multi") == 0)

            {
                multi();
            }
            else if(strcmp(cmd,"divide") == 0)

            {
                divide(); 
            }
            else if(strcmp(cmd,"bigger") == 0)
    
            {
                bigger();
            }
            else if(strcmp(cmd,"oppnum") == 0)

            {
                oppnum();
            }
            else
            {
                printf("Error command!\n");
                hello();
            }
    }
    return 0;
}


