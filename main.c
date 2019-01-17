#include <stdio.h>
char arr[1024];
int index=0;
int main(){
    printf("minganzifuguanlixitong");
    while(1){
        printf("1---tianjiaminganzifu\n");
        printf("2---shanchuminganzifu(zuihouyige)\n");
        printf("3---chakanminganzifu\n");
        printf("4---tihuanminganzifu\n");
        printf("5---htuichu\n");
        printf("qingshuruxiangyingdegongnengbianhao:\n");
        int code;
        scanf("%d",&code);
        if(code==1){
            printf("qingshuruyaotianjiademinganzifu:\n");
            char m;
            scanf("%c",&m);
            scanf("%c",&m);
            arr[index]=m;
            index++;
            printf("tianjiachenggong,dianjihuichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);

        }
         if(code==2){
             printf("shanchuminganzifu\n");
             index--;
             printf("shanchuchenggong,dianjihuichejixu\n");
             char x;
            scanf("%c",&x);
            scanf("%c",&x);

            
        }
         if(code==3){
            
        }
         if(code==4){
            
        }
         if(code==5){
            
        }
    }
    return 0;

}                                                                                                       