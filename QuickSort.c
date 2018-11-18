//
//  main.c
//  QuickSort
//
//  Created by NapoleonYoung on 2018/11/13.
//  Copyright © 2018年 NapoleonYoung. All rights reserved.
//

#include <stdio.h>
int array[101], n;

void quickSort(int left, int right) {
    
    int temp, i, j, t;
    
    if (left > right) {
        return;
    }
    
    temp = array[left];
    i = left;
    j = right;
    
    while (i != j) {
        // 从右向左找
        while (array[j] >= temp && i < j) {
            j --;
        }
        // 从左向右找
        while (array[i] <= temp && i < j) {
            i ++;
        }
        // 交换两个数在数组中的位置
        if (i < j) {// 如果两个哨兵没有相遇
            t = array[i];
            array[i] = array[j];
            array[j] = t;
        }
        
    }
    
    // 将基准数归位
    array[left] = array[i];
    array[i] = temp;
    
    quickSort(left, i - 1);
    quickSort(i + 1, right);
    
    return;
    
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
    quickSort(0, n - 1);
    printf("排序完毕");
    
    for (j = 0; j < n; j ++) {
        printf("%d_", array[j]);
    }
    return 0;
}
