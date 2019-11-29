#include <stdio.h>
#include <time.h>

struct coordinate {
    float x, y, z;
} aosobj[40000];

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
      aosobj[i].x=i+i+ randV;
      aosobj[i].y=i-i+ randV;
      aosobj[i].z=i*i+ randV;
    }
/*
    for(i=0; i<40000; i++) {
      aosobj[i].x=i+j+ randV;
      aosobj[i].y=i-j+ randV;
      aosobj[i].z=i*j+ randV;
    }*/

    randV=rand();
    randV=randV*0.11;

  }
  }
}
