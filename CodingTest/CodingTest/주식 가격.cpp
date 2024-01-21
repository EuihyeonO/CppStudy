//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//int* solution(int prices[], size_t prices_len) 
//{
//    int i, j;
//    int* answer = (int*)malloc(sizeof(int) * prices_len);
//
//    for (i = 0; i < prices_len; i++) 
//    {
//        for (j = i + 1; j < prices_len; j++) 
//        {
//            if (prices[i] > prices[j]) 
//            {
//                answer[i] = j - i;
//                break;
//            }
//        }
//
//        if (answer[i] != j - i)
//        {
//            answer[i] = j - i - 1;
//        }
//    }
//
//    return answer;
//}