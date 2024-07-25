#include<stdio.h>
float avg(int n){
   int arr[n];
   int sum=0;
   float avger=0;
   for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
      sum+=arr[i];
   }
   avger=(sum)/n;
   return avger;
}
int main(){
   int n;
   scanf("%d",&n);
   float k=avg(n);
   printf("%f",k);
}
