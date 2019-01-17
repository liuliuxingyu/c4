#include <stdio.h>
char arr[1024];
int index=0;
int isMingan(char x){
    int count=0;
    for(int i=0;i<index;i++){
        if(x==count){
            count++;
        }
    }
    if(count==0){
        return 0;
    }else{
        return 1;
    }
}
int main(){
    printf("minganzifuguanlixitong\n");
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
             printf("suoyouminganzifuruxia:\n");
             for(int i=0;i<index;i++){
                 printf("di%dgeminganzifuwei:%c\n",i+1,arr[i]);
             }
             printf("chakanchenggong,dianjihuichejixu\n");
             char x;
            scanf("%c",&x);
            scanf("%c",&x);
            
        }
         if(code==4){
             printf("qingshuruyiduanyingwen:\n");
             int neriong[1024];
             scanf("%s",neriong);
             for(int i=0;1;i++){
                 if(neriong[i]=='\0'){
                     break;
                 }
                 if(isMingan(neriong[i])==1){
                 neriong[i]='*';
             }
             printf("%c",neriong[i]);
                 
             }
             printf("\n");
             printf("tihuanchenggong,dianjihuichejixu\n");
              char x;
            scanf("%c",&x);
            scanf("%c",&x);
            
             

            
        }
         if(code==5){
             printf("tuichu\n");
             break;
             
            
        }
    }
    return 0;

}                                                                                                       