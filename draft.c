#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int num[100];
    for (int i = 0;i<n;i++){
        scanf("%d",&num[i]);
    }

    for (int i=0;i<n;i++){
        int count = 0,check = 1;
        for (int j =0;j<i;i++){
            if (num[i] == num[j]){
                check = 0;
                break;
            }
        }
        if (check){
            for (int k=0;k<n;k++){
                if (num[i] == num[k]){
                    count++;
                }
            printf("%d %d\n",num[i],count);
            }   
        }   
    }
    return 0;
}

// #include <stdio.h>

// int main(){
//     int h1,m1,s1,h2,m2,s2;
//     scanf("%d:%d:%d",&h1,&m1,&s1);
//     scanf("%d:%d:%d",&h2,&m2,&s2);
//     int h,m,s;
//     h = h2 - h1;
//     m = m2 - m1;
//     s = s2 -s1;
    
// }
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char text[1000];

//     printf("Enter the text: ");
//     fgets(text, 1000, stdin);

//     for (int i = 0; i < strlen(text); i++) {
//         if (text[i] >= 'a' && text[i] <= 'z') {
//             text[i] = text[i] - 32;
//         }
//     }

//     printf("The upper-case text is:\n%s", text);

//     return 0;
// }
