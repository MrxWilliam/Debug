#include <stdio.h>
int main() {
    char input;
    int temp[3]={0,0,0};
    for(int i=0;i<3;i++){
       scanf("%c",&input);
       if(input=='\n')	break;
        if(input == 'r'){
            temp[0]=1;
        }
        if(input == 'w'){
            temp[1]=1;
        }
        if(input == 'x'){
            temp[2]=1;
        }
        
    }
    while (scanf("%c" , &input) !=EOF){
       if(input == '\n'){
          continue;
       }
       if(input=='+'){
           scanf("%c" , &input);
           if(input == 'r'){
            temp[0]=1;
           }
           if(input == 'w'){
            temp[1]=1;
           }
           if(input == 'x'){
            temp[2]=1;
           }  
       } 
        if(input=='-'){
           scanf("%c" , &input);
           if(input == 'r'){
            temp[0]=0;
           }
           if(input == 'w'){
            temp[1]=0;
           }
           if(input == 'x'){
            temp[2]=0;
           }  
       } 
    }
    int o=temp[0]*2*2+temp[1]*2+temp[2];
    printf("%d",o);
    return 0;
}
