#include <stdio.h>
#include <time.h>

struct coordinate2 {
    float x[40000], y[40000], z[40000];
} soaobj;

int main(){

  int i,j,z;
  float randV;

  srand(time(NULL));
  randV=rand();
  randV=randV*0.11;
  printf("randV %f\n", randV);

  for(z=0; z<10; z++) {
  randV=rand();
  randV=randV*0.11;

  for(j=0; j<40000; j++) {

    for(i=0; i<40000; i++) {
      soaobj.x[i]=i+i+ randV;
      soaobj.y[i]=i-i+ randV;
      soaobj.z[i]=i*i+ randV;
    }
/*
    for(i=0; i<40000; i++) {
      soaobj.x[i]=i+j+ randV;
      soaobj.y[i]=i-j+ randV;
      soaobj.z[i]=i*j+ randV;
    }*/

    randV=rand();
    randV=randV*0.11;


  }
}
}
