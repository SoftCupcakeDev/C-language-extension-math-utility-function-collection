#include "additionaMathLib.h"
#include <stdlib.h>
#include <math.h>

double foun(double numerator, double denominator){
    return numerator/denominator;
};

//sigmoid 함수
double sigmoid(double x){
    return 1.0 / (1.0 + exp(-x));
}

//기울기 구하는 함수
double slope(double x1, double x2, double y1, double y2){
    double result = (y2 - y1)/(x2 -x1);

    return result;
}

//랜덤 숫자 생성
int getRandom(int Range){
   int result = rand()%(int)Range; 

   return result;
}