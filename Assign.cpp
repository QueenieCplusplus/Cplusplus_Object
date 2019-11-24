// 2019, 11/24, by Queenie
// assign

#include <iostream>
#include <utility>

void assign() {
    // 初始化記憶體（數值）予具名物件就是變數
    double d = 1.5;
    int i = 3;
    // 等號左邊是賦值，右邊是算式
    // 等號左邊是變數容器，即具名物件（依照特定型別解釋後裝入位元的容器）
    d = d + i;
    i = d * i;
}

int main(){

    assign();
    return 0;

}