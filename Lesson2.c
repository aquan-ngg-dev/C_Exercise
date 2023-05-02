// BUỔI 2: XÂY DỰNG CÁC HÀM XỬ LÝ CHUỖI CƠ BẢN TRONG C
#include<stdio.h>
#include<math.h>

int is_lower(char c){
    if (c >= 'a' && c <= 'z'){
        return 1;
    }
    return 0;
}

int is_upper(char c){
    if (c>='A'&& c<='Z'){
        return 1;
    }
    return 0;
}

int is_alpha(char c){
    if ((c >= 'a' && c<='z')||(c>='A'&&c<='Z')){
        return 1;
    }
    return 0;
}

int is_digit(char c){
    if ((c>='0')&&(c<='9')){
        return 1;
    }
    return 0;
}

char to_lower(char c){
    if (c>='A'&&c<='Z'){
        c+=32;
    }
    return c;
}
char to_upper(char c){
    if (c>='a'&&c<='z'){
        c-=32; 
    }
    return c;
}

int strlen(char c[]){
    int cnt = 0;
    while (c[cnt]!='\0'){
        ++cnt;
    }
    return cnt;
}

char* strlwr(char c[]){
    for(int i = 0;i<strlen(c);i++){
        if (c[i]>'A' && c[i]<='Z'){
            c[i] += 32;
        }
        //c[i] = to_lower(c[i]);
    }    
    return c;
}

char* strupr(char c[]){
    for (int i=0;i<strlen(c);i++){
        c[i] = to_upper(c[i]);
    }
    return c;
}

int strcmp(char a[], char b[]){
    int n1 = strlen(a);
    int n2 = strlen(b);
    for (int i = 0;i<fmin(n1,n2);i++){
        if (a[i]!=b[i]){
            if (a[i]>b[i]){return 1;}
            else{return -1;}
        }
    }
    if (n1==n2)
        return 0;
    else if (n1<n2) return -1;
    else return 1;
}

int strcmpi(char a[], char b[]){
    int n1 = strlen(a);
    int n2 = strlen(b);
    strlwr(a);
    strlwr(b);
    for (int i = 0;i<fmin(n1,n2);i++){
        if (a[i]!=b[i]){
            if (a[i]>b[i]){return 1;}
            else{return -1;}
        }
    }
    if (n1==n2)
        return 0;
    else if (n1<n2) return -1;
    else return 1;
}
long long atoll(char a[]){
    long long res = 0;
    for(int i =0;i<strlen(a);i++){
        res = res * 10 + a[i] - '0';
    }
    return res;
}

char* strrev(char c[]){
    int l = 0, r = strlen(c) - 1;
    while (l < r){
        char tmp = c[l];
        c[l] = c[r];
        c[r] = tmp;
        l++; r--;
    }
    return c;
}

int main(){
    char a[100],b[100];
    gets(a);
    printf("%s",strrev(a));
}