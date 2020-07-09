#include <stdio.h>

//MrHaddis
//https://github.com/MrHaddis/PAT1026

int main() {
    int c1, c2;
    int result;
    //定义时分秒
    int s = 0, f = 0, m = 0;
    scanf("%d %d", &c1, &c2);
    //计算秒数
    result = (c2 - c1) / 100;
    //计算是否满足+1秒的条件
    int isAdd = (c2 - c1) % 100;
    //有小时
    if (result > 3600) {
        s = result / 3600;
        f = (result - 3600 * s) / 60;
        m = result - 3600 * s - 60 * f;
    } else if (result > 60) {
        //没有小时
        f =  result / 60;
        m = result - 60 * f;
    } else {
        //没有时 没有分
        m = result;
    }
    if (isAdd >= 50) {
        m += 1;
    }
    printf("%02d:%02d:%02d", s, f, m);
    return 0;
}
