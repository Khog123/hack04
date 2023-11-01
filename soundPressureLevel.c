#include<stdio.h>

int main(){

    double decibel, level;

    printf("Enter the decibel level: ");
    scanf("%lf", &decibel_lvel);

    if (decibel_level >= 0 && decibel_level <= 60){
        printf("Quiet");  
} else if (decibel_level >= 61 && decibel_level <= 70){
    printf("Conversational");
}else if (decibel_level >= 71 && decibel_level <= 90){
    printf("Loud\n");
}else if (decibel_level >= 91 && decibel_level <= 110){
    printf("Very Loud\n");
}else if (decibel_level >= 111 && decibel_level <= 129){
    printf("Dangerous\n");
}else if (decibel_level >= 130 && decibel_level <= 194){
    printf("Very Dangerous\n");
}else {
    printf("Invalid decibel level. Please enter a valid value.\n");
}

return 0;
}