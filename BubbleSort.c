//
//  main.c
//  QuickSort
//
//  Created by NapoleonYoung on 2018/11/13.
//  Copyright © 2018年 NapoleonYoung. All rights reserved.
//

#include <stdio.h>
int array[101], n;

void bubbleSort() {
    int i, j;
    for (i = 0; i < n; i ++) {
        for (j = 0; j < n - i - 1; j ++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int i, j;
    // 读入数据
    printf("请输入N = ");
    scanf("%d", &n);
    for (i = 0; i < n; i ++) {
        scanf("%d", &array[i]);
    }
    
    bubbleSort();
    printf("排序完毕");
    
    for (j = 0; j < n; j ++) {
        printf("%d_", array[j]);
    }
    return 0;
}
