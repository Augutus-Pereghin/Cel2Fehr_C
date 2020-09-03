#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

// Writer: Augustus Perseghin
// Collaborator: ZiHao Zhu
// Collaborator: Chenyin Zhang

int main(void) {
  
  float temp_C = atof(readline("Enter temperature in celsius: "));

  printf("%f° in Celsius is equivalent to %f\u00B0 Fahrenheit.\n",temp_C,(temp_C * 9/5 +32));

  return 0;
}