//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//    float num;
//    int input_status; // 用于存储scanf的返回值
//    double buffer; // 用来临时存储非整数输入
//
//    printf("请输入一个整数: ");
//    scanf("%f", &num); // 尝试读取一个整数
//    printf("%f\n", num);
//    while (1) { // 开始一个无限循环，直到得到正确的输入为止
//        if (num == (int)num) { // 如果成功读取了一个整数
//            printf("您输入的整数是: %d\n", (int)num);
//            break; // 跳出循环
//        }
//        else { // 如果输入不是整数
//            // 清除错误输入
//            printf("请再次输入\n");
//            input_status = scanf("%f", &num); // 尝试读取一个整数
//        }
//    }
//
//    return 0;
//}