// BUỔI 1:GIỚI THIỆU VỀ XÂU KÝ TỰ|MẢNG KÝ TỰ TRONG NGÔN NGỮ C
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int main(){
    //scanf("%s", a); //Dừng nhập khi gặp dấu cách,dấu tab,dấu enter,dấu end line, dấu end of file (EOF),thừa phím enter ở bộ đệm
    //gets(a); //Dừng nhập khi gặp dấu xuống dòng, dấu EOF, không thừa phím enter
    //cả scanf và gets cho phép nhập quá số kí tự tối đa, các kí tự thừa được lưu vào bộ nhớ không hợp lệ làm chương trình bị sai
    //scanf("%10s",a); //Nhập tối đa 10 ký tự
   int x;
   scanf("%d",&x);
   //getchar(); //Đọc 1 ký tự từ bàn phím, có thể thay thể bằng scanf("\n");
   scanf("\n");
   char a[10005];
   gets(a);
   printf("%s",a);
    //    Nguyen Anh Quan coded this file.
    // Nguyen Anh Quan noted this text.T dang thu resolve conflict
    
}
