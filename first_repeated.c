#include<stdio.h>
int main(){
  int a[10],s,i,j,flag;
  scanf("%d",&s);
  for(i=0;i<s;i++)
  scanf("%d",&a[i]);
  flag=s;
  for(i=0;i<s;i++){
  for(j=i+1;j<s;j++){
  if(a[i]==a[j] && flag>j){
  flag=j;
  break;
  }
  }
  }
  printf("%d",a[flag]);
  return 0;
  }
  
  
